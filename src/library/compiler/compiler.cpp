/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/sexpr/option_declarations.h"
#include "kernel/type_checker.h"
#include "library/noncomputable.h" // TODO(Leo): remove
#include "library/max_sharing.h"
#include "library/compiler/util.h"
#include "library/compiler/lcnf.h"
#include "library/compiler/cse.h"
#include "library/compiler/csimp.h"
#include "library/compiler/elim_dead_let.h"
#include "library/compiler/erase_irrelevant.h"

namespace lean {
static name * g_codegen = nullptr;

bool is_codegen_enabled(options const & opts) {
    return opts.get_bool(*g_codegen, true);
}

static comp_decls to_comp_decls(environment const & env, names const & cs) {
    return map2<comp_decl>(cs, [&](name const & n) { return comp_decl(n, env.get(n).get_value()); });
}

static expr eta_expand(environment const & env, expr const & e) {
    return type_checker(env).eta_expand(e);
}

template<typename F>
comp_decls apply(F && f, environment const & env, comp_decls const & ds) {
    return map(ds, [&](comp_decl const & d) { return comp_decl(d.fst(), f(env, d.snd())); });
}

template<typename F>
comp_decls apply(F && f, comp_decls const & ds) {
    return map(ds, [&](comp_decl const & d) { return comp_decl(d.fst(), f(d.snd())); });
}

environment compile(environment const & env, options const & opts, names const & cs) {
    if (!is_codegen_enabled(opts))
        return env;

    for (name const & c : cs) {
        if (!env.get(c).is_definition() || is_noncomputable(env, c))
            return env;
    }

    comp_decls ds = to_comp_decls(env, cs);
    auto simp = [&](environment const & env, expr const & e) { return csimp(env, e, csimp_cfg(opts)); };

    ds = apply(eta_expand, env, ds);
    ds = apply(to_lcnf, env, ds);
    ds = apply(cce, env, ds);
    ds = apply(simp, env, ds);
    ds = apply(elim_dead_let, ds);
    ds = apply(cse, env, ds);
    ds = apply(max_sharing, ds);
    ds = apply(erase_irrelevant, env, ds);

    // TODO(Leo)
    return env;
}

void initialize_compiler() {
    g_codegen = new name("codegen");
    register_bool_option(*g_codegen, true, "(compiler) enable/disable code generation");
}

void finalize_compiler() {
    delete g_codegen;
}
}