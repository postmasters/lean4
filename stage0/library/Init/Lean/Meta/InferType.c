// Lean compiler output
// Module: Init.Lean.Meta.InferType
// Imports: Init.Lean.LBool Init.Lean.Meta.Basic
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_inferTypeAuxAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* lean_expr_mk_sort(lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_expr_hash(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize___main(lean_object*);
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_forallTelescope___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ExprStructEq_Hashable;
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Meta_InferType_12__isAlwaysZero(lean_object*);
lean_object* l_PersistentHashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_2__inferAppType___at_Lean_Meta_inferTypeAux___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_mk_mvar(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassQuick___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType___at_Lean_Meta_inferTypeAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_15__isPropQuick(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l_Lean_Meta_isClassExpensive___at_Lean_Meta_inferTypeAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_Meta_inferTypeAuxAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_11__checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_usingDefault(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_fvar(lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_14__isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_2__inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_15__isPropQuick___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_14__isPropQuickApp___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_proj(lean_object*, lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_Monad___rarg(lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ExprStructEq_HasBeq;
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_9__lambdaTelescopeAux___main___at_Lean_Meta_inferTypeAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1;
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassExpensive(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_10__inferFVarType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_9__inferMVarType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshId___rarg(lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_mk_imax(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___boxed(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_inferTypeAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_3__inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassExpensive___at_Lean_Meta_inferTypeAux___spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_9__inferMVarType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVars(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_mk_succ(lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_type_lparams(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_3__inferConstType(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_EIO_Monad___closed__1;
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType___at_Lean_Meta_inferTypeAux___spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferTypeAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_inhabited___closed__1;
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_4__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main___boxed(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___at_Lean_Meta_inferTypeAux___spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_10 = x_5;
} else {
 lean_dec_ref(x_5);
 x_10 = lean_box(0);
}
if (lean_obj_tag(x_9) == 7)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = lean_ctor_get(x_9, 2);
lean_inc(x_43);
lean_dec(x_9);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_8);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_7);
return x_45;
}
else
{
lean_object* x_46; 
x_46 = lean_box(0);
x_11 = x_46;
goto block_42;
}
block_42:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_11);
lean_inc(x_1);
x_12 = lean_expr_instantiate_rev_range(x_9, x_8, x_4, x_1);
lean_dec(x_8);
lean_dec(x_9);
lean_inc(x_6);
x_13 = lean_apply_3(x_2, x_12, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 7)
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 2);
lean_inc(x_17);
lean_dec(x_14);
if (lean_is_scalar(x_10)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_10;
}
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = lean_ctor_get(x_14, 2);
lean_inc(x_20);
lean_dec(x_14);
if (lean_is_scalar(x_10)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_10;
}
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_13, 1);
x_25 = lean_ctor_get(x_13, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_6, 1);
lean_inc(x_28);
lean_dec(x_6);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_30, 0, x_3);
lean_ctor_set(x_30, 1, x_1);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_30);
return x_13;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
lean_dec(x_13);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_6, 1);
lean_inc(x_34);
lean_dec(x_6);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_36, 0, x_3);
lean_ctor_set(x_36, 1, x_1);
lean_ctor_set(x_36, 2, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_13);
if (x_38 == 0)
{
return x_13;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_13, 0);
x_40 = lean_ctor_get(x_13, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_13);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_EIO_Monad___closed__1;
x_2 = l_ReaderT_Monad___rarg(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_1__getForallResultType___lambda__1), 7, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_array_get_size(x_3);
x_10 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1;
lean_inc(x_9);
x_11 = l_Nat_foldMAux___main___rarg(x_10, x_6, x_9, x_9, x_8);
x_12 = lean_apply_2(x_11, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_expr_instantiate_rev_range(x_16, x_15, x_9, x_3);
lean_dec(x_9);
lean_dec(x_15);
lean_dec(x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_expr_instantiate_rev_range(x_21, x_20, x_9, x_3);
lean_dec(x_9);
lean_dec(x_20);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_9);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_2__inferAppType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
x_7 = lean_apply_3(x_2, x_3, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l___private_Init_Lean_Meta_InferType_1__getForallResultType(x_1, x_8, x_4, x_5, x_9);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_3__inferConstType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_environment_find(x_5, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_ConstantInfo_lparams(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_List_lengthAux___main___rarg(x_13, x_14);
lean_dec(x_13);
x_16 = l_List_lengthAux___main___rarg(x_2, x_14);
x_17 = lean_nat_dec_eq(x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_alloc_ctor(7, 3, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_2);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_22 = lean_instantiate_type_lparams(x_12, x_2);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_3__inferConstType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_InferType_3__inferConstType(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
x_9 = lean_apply_3(x_1, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 7)
{
uint8_t x_11; 
lean_dec(x_7);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 2);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_Expr_hasLooseBVars(x_13);
if (x_14 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_expr_mk_proj(x_2, x_5, x_4);
x_16 = lean_expr_instantiate1(x_13, x_15);
lean_dec(x_15);
lean_dec(x_13);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_10, 2);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Expr_hasLooseBVars(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_expr_mk_proj(x_2, x_5, x_4);
x_22 = lean_expr_instantiate1(x_18, x_21);
lean_dec(x_21);
lean_dec(x_18);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_5);
x_24 = !lean_is_exclusive(x_9);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_9, 1);
x_26 = lean_ctor_get(x_9, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_dec(x_7);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_4);
lean_ctor_set(x_31, 3, x_30);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_31);
return x_9;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_9, 1);
lean_inc(x_32);
lean_dec(x_9);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_7, 1);
lean_inc(x_35);
lean_dec(x_7);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_35);
x_37 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_3);
lean_ctor_set(x_37, 2, x_4);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_32);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_9);
if (x_39 == 0)
{
return x_9;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_9, 0);
x_41 = lean_ctor_get(x_9, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_9);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
x_8 = lean_apply_3(x_2, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
lean_inc(x_6);
x_11 = lean_apply_3(x_1, x_9, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
x_17 = l_Lean_Expr_getAppFn___main(x_14);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_15);
x_20 = lean_environment_find(x_15, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_dec(x_6);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_16);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_23, 0, x_3);
lean_ctor_set(x_23, 1, x_4);
lean_ctor_set(x_23, 2, x_5);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_23);
return x_11;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
if (lean_obj_tag(x_24) == 5)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
lean_dec(x_6);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_15);
lean_ctor_set(x_28, 1, x_16);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_4);
lean_ctor_set(x_29, 2, x_5);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_29);
return x_11;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Expr_getAppNumArgsAux___main(x_14, x_33);
x_35 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_34);
x_36 = lean_mk_array(x_34, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_sub(x_34, x_37);
lean_dec(x_34);
x_39 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_14, x_36, x_38);
x_40 = lean_array_get_size(x_39);
x_41 = lean_nat_dec_eq(x_31, x_40);
lean_dec(x_40);
lean_dec(x_31);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_32);
lean_dec(x_19);
lean_dec(x_1);
x_42 = lean_ctor_get(x_6, 1);
lean_inc(x_42);
lean_dec(x_6);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_15);
lean_ctor_set(x_43, 1, x_16);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_44, 0, x_3);
lean_ctor_set(x_44, 1, x_4);
lean_ctor_set(x_44, 2, x_5);
lean_ctor_set(x_44, 3, x_43);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_44);
return x_11;
}
else
{
lean_object* x_45; 
lean_inc(x_15);
x_45 = lean_environment_find(x_15, x_32);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_19);
lean_dec(x_1);
x_46 = lean_ctor_get(x_6, 1);
lean_inc(x_46);
lean_dec(x_6);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_16);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_48, 0, x_3);
lean_ctor_set(x_48, 1, x_4);
lean_ctor_set(x_48, 2, x_5);
lean_ctor_set(x_48, 3, x_47);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_48);
return x_11;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_11);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
lean_dec(x_45);
x_50 = lean_instantiate_type_lparams(x_49, x_19);
lean_inc(x_6);
lean_inc(x_1);
x_51 = l___private_Init_Lean_Meta_InferType_1__getForallResultType(x_1, x_50, x_39, x_6, x_13);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_54 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_4__inferProjType___lambda__1), 8, 4);
lean_closure_set(x_54, 0, x_1);
lean_closure_set(x_54, 1, x_3);
lean_closure_set(x_54, 2, x_4);
lean_closure_set(x_54, 3, x_5);
x_55 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1;
lean_inc(x_4);
x_56 = l_Nat_foldMAux___main___rarg(x_55, x_54, x_4, x_4, x_52);
lean_inc(x_6);
x_57 = lean_apply_2(x_56, x_6, x_53);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_6);
x_60 = lean_apply_3(x_1, x_58, x_6, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 7)
{
uint8_t x_62; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
lean_ctor_set(x_60, 0, x_64);
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_dec(x_60);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_dec(x_61);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_61);
x_68 = !lean_is_exclusive(x_60);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_69 = lean_ctor_get(x_60, 1);
x_70 = lean_ctor_get(x_60, 0);
lean_dec(x_70);
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_6, 1);
lean_inc(x_73);
lean_dec(x_6);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
lean_ctor_set(x_74, 2, x_73);
x_75 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_4);
lean_ctor_set(x_75, 2, x_5);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set_tag(x_60, 1);
lean_ctor_set(x_60, 0, x_75);
return x_60;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_60, 1);
lean_inc(x_76);
lean_dec(x_60);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_6, 1);
lean_inc(x_79);
lean_dec(x_6);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
lean_ctor_set(x_80, 2, x_79);
x_81 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_81, 0, x_3);
lean_ctor_set(x_81, 1, x_4);
lean_ctor_set(x_81, 2, x_5);
lean_ctor_set(x_81, 3, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_76);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_83 = !lean_is_exclusive(x_60);
if (x_83 == 0)
{
return x_60;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_60, 0);
x_85 = lean_ctor_get(x_60, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_60);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_57);
if (x_87 == 0)
{
return x_57;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_57, 0);
x_89 = lean_ctor_get(x_57, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_57);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_51);
if (x_91 == 0)
{
return x_51;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_51, 0);
x_93 = lean_ctor_get(x_51, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_51);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_95 = lean_ctor_get(x_6, 1);
lean_inc(x_95);
lean_dec(x_6);
x_96 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_96, 0, x_15);
lean_ctor_set(x_96, 1, x_16);
lean_ctor_set(x_96, 2, x_95);
x_97 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_97, 0, x_3);
lean_ctor_set(x_97, 1, x_4);
lean_ctor_set(x_97, 2, x_5);
lean_ctor_set(x_97, 3, x_96);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_97);
return x_11;
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_98 = lean_ctor_get(x_6, 1);
lean_inc(x_98);
lean_dec(x_6);
x_99 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_99, 0, x_15);
lean_ctor_set(x_99, 1, x_16);
lean_ctor_set(x_99, 2, x_98);
x_100 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_100, 0, x_3);
lean_ctor_set(x_100, 1, x_4);
lean_ctor_set(x_100, 2, x_5);
lean_ctor_set(x_100, 3, x_99);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_100);
return x_11;
}
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_1);
x_101 = lean_ctor_get(x_6, 1);
lean_inc(x_101);
lean_dec(x_6);
x_102 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_102, 0, x_15);
lean_ctor_set(x_102, 1, x_16);
lean_ctor_set(x_102, 2, x_101);
x_103 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_103, 0, x_3);
lean_ctor_set(x_103, 1, x_4);
lean_ctor_set(x_103, 2, x_5);
lean_ctor_set(x_103, 3, x_102);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_103);
return x_11;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_104 = lean_ctor_get(x_11, 1);
x_105 = lean_ctor_get(x_11, 0);
lean_inc(x_104);
lean_inc(x_105);
lean_dec(x_11);
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_104, 1);
lean_inc(x_107);
x_108 = l_Lean_Expr_getAppFn___main(x_105);
if (lean_obj_tag(x_108) == 4)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
lean_inc(x_106);
x_111 = lean_environment_find(x_106, x_109);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_110);
lean_dec(x_105);
lean_dec(x_1);
x_112 = lean_ctor_get(x_6, 1);
lean_inc(x_112);
lean_dec(x_6);
x_113 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_113, 0, x_106);
lean_ctor_set(x_113, 1, x_107);
lean_ctor_set(x_113, 2, x_112);
x_114 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_114, 0, x_3);
lean_ctor_set(x_114, 1, x_4);
lean_ctor_set(x_114, 2, x_5);
lean_ctor_set(x_114, 3, x_113);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_104);
return x_115;
}
else
{
lean_object* x_116; 
x_116 = lean_ctor_get(x_111, 0);
lean_inc(x_116);
lean_dec(x_111);
if (lean_obj_tag(x_116) == 5)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
lean_dec(x_116);
x_118 = lean_ctor_get(x_117, 4);
lean_inc(x_118);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_105);
lean_dec(x_1);
x_119 = lean_ctor_get(x_6, 1);
lean_inc(x_119);
lean_dec(x_6);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_106);
lean_ctor_set(x_120, 1, x_107);
lean_ctor_set(x_120, 2, x_119);
x_121 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_121, 0, x_3);
lean_ctor_set(x_121, 1, x_4);
lean_ctor_set(x_121, 2, x_5);
lean_ctor_set(x_121, 3, x_120);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_104);
return x_122;
}
else
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_118, 1);
lean_inc(x_123);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_dec(x_117);
x_125 = lean_ctor_get(x_118, 0);
lean_inc(x_125);
lean_dec(x_118);
x_126 = lean_unsigned_to_nat(0u);
x_127 = l_Lean_Expr_getAppNumArgsAux___main(x_105, x_126);
x_128 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_127);
x_129 = lean_mk_array(x_127, x_128);
x_130 = lean_unsigned_to_nat(1u);
x_131 = lean_nat_sub(x_127, x_130);
lean_dec(x_127);
x_132 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_105, x_129, x_131);
x_133 = lean_array_get_size(x_132);
x_134 = lean_nat_dec_eq(x_124, x_133);
lean_dec(x_133);
lean_dec(x_124);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_132);
lean_dec(x_125);
lean_dec(x_110);
lean_dec(x_1);
x_135 = lean_ctor_get(x_6, 1);
lean_inc(x_135);
lean_dec(x_6);
x_136 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_136, 0, x_106);
lean_ctor_set(x_136, 1, x_107);
lean_ctor_set(x_136, 2, x_135);
x_137 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_137, 0, x_3);
lean_ctor_set(x_137, 1, x_4);
lean_ctor_set(x_137, 2, x_5);
lean_ctor_set(x_137, 3, x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_104);
return x_138;
}
else
{
lean_object* x_139; 
lean_inc(x_106);
x_139 = lean_environment_find(x_106, x_125);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_132);
lean_dec(x_110);
lean_dec(x_1);
x_140 = lean_ctor_get(x_6, 1);
lean_inc(x_140);
lean_dec(x_6);
x_141 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_141, 0, x_106);
lean_ctor_set(x_141, 1, x_107);
lean_ctor_set(x_141, 2, x_140);
x_142 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_142, 0, x_3);
lean_ctor_set(x_142, 1, x_4);
lean_ctor_set(x_142, 2, x_5);
lean_ctor_set(x_142, 3, x_141);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_104);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_107);
lean_dec(x_106);
x_144 = lean_ctor_get(x_139, 0);
lean_inc(x_144);
lean_dec(x_139);
x_145 = lean_instantiate_type_lparams(x_144, x_110);
lean_inc(x_6);
lean_inc(x_1);
x_146 = l___private_Init_Lean_Meta_InferType_1__getForallResultType(x_1, x_145, x_132, x_6, x_104);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_149 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_4__inferProjType___lambda__1), 8, 4);
lean_closure_set(x_149, 0, x_1);
lean_closure_set(x_149, 1, x_3);
lean_closure_set(x_149, 2, x_4);
lean_closure_set(x_149, 3, x_5);
x_150 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1;
lean_inc(x_4);
x_151 = l_Nat_foldMAux___main___rarg(x_150, x_149, x_4, x_4, x_147);
lean_inc(x_6);
x_152 = lean_apply_2(x_151, x_6, x_148);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
lean_inc(x_6);
x_155 = lean_apply_3(x_1, x_153, x_6, x_154);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
if (lean_obj_tag(x_156) == 7)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_158 = x_155;
} else {
 lean_dec_ref(x_155);
 x_158 = lean_box(0);
}
x_159 = lean_ctor_get(x_156, 1);
lean_inc(x_159);
lean_dec(x_156);
if (lean_is_scalar(x_158)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_158;
}
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_157);
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_156);
x_161 = lean_ctor_get(x_155, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_162 = x_155;
} else {
 lean_dec_ref(x_155);
 x_162 = lean_box(0);
}
x_163 = lean_ctor_get(x_161, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_161, 1);
lean_inc(x_164);
x_165 = lean_ctor_get(x_6, 1);
lean_inc(x_165);
lean_dec(x_6);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
lean_ctor_set(x_166, 2, x_165);
x_167 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_167, 0, x_3);
lean_ctor_set(x_167, 1, x_4);
lean_ctor_set(x_167, 2, x_5);
lean_ctor_set(x_167, 3, x_166);
if (lean_is_scalar(x_162)) {
 x_168 = lean_alloc_ctor(1, 2, 0);
} else {
 x_168 = x_162;
 lean_ctor_set_tag(x_168, 1);
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_161);
return x_168;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_169 = lean_ctor_get(x_155, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_155, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_171 = x_155;
} else {
 lean_dec_ref(x_155);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_172 = x_171;
}
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_170);
return x_172;
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_173 = lean_ctor_get(x_152, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_152, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_175 = x_152;
} else {
 lean_dec_ref(x_152);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_177 = lean_ctor_get(x_146, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_146, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_179 = x_146;
} else {
 lean_dec_ref(x_146);
 x_179 = lean_box(0);
}
if (lean_is_scalar(x_179)) {
 x_180 = lean_alloc_ctor(1, 2, 0);
} else {
 x_180 = x_179;
}
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_178);
return x_180;
}
}
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_123);
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_110);
lean_dec(x_105);
lean_dec(x_1);
x_181 = lean_ctor_get(x_6, 1);
lean_inc(x_181);
lean_dec(x_6);
x_182 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_182, 0, x_106);
lean_ctor_set(x_182, 1, x_107);
lean_ctor_set(x_182, 2, x_181);
x_183 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_183, 0, x_3);
lean_ctor_set(x_183, 1, x_4);
lean_ctor_set(x_183, 2, x_5);
lean_ctor_set(x_183, 3, x_182);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_104);
return x_184;
}
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_116);
lean_dec(x_110);
lean_dec(x_105);
lean_dec(x_1);
x_185 = lean_ctor_get(x_6, 1);
lean_inc(x_185);
lean_dec(x_6);
x_186 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_186, 0, x_106);
lean_ctor_set(x_186, 1, x_107);
lean_ctor_set(x_186, 2, x_185);
x_187 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_187, 0, x_3);
lean_ctor_set(x_187, 1, x_4);
lean_ctor_set(x_187, 2, x_5);
lean_ctor_set(x_187, 3, x_186);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_104);
return x_188;
}
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_108);
lean_dec(x_105);
lean_dec(x_1);
x_189 = lean_ctor_get(x_6, 1);
lean_inc(x_189);
lean_dec(x_6);
x_190 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_190, 0, x_106);
lean_ctor_set(x_190, 1, x_107);
lean_ctor_set(x_190, 2, x_189);
x_191 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_191, 0, x_3);
lean_ctor_set(x_191, 1, x_4);
lean_ctor_set(x_191, 2, x_5);
lean_ctor_set(x_191, 3, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_104);
return x_192;
}
}
}
else
{
uint8_t x_193; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_193 = !lean_is_exclusive(x_11);
if (x_193 == 0)
{
return x_11;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_11, 0);
x_195 = lean_ctor_get(x_11, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_11);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
else
{
uint8_t x_197; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_197 = !lean_is_exclusive(x_8);
if (x_197 == 0)
{
return x_8;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_8, 0);
x_199 = lean_ctor_get(x_8, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_8);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_4);
x_9 = lean_apply_3(x_1, x_7, x_4, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_12, x_4, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l_Lean_Meta_mkFreshId___rarg(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_level_mk_mvar(x_18);
lean_inc(x_20);
x_21 = lean_expr_mk_sort(x_20);
x_22 = l_Lean_Meta_assignExprMVar(x_12, x_21, x_4, x_19);
lean_dec(x_4);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_20);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_12);
x_31 = !lean_is_exclusive(x_13);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_13, 1);
x_33 = lean_ctor_get(x_13, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_4, 1);
lean_inc(x_36);
lean_dec(x_4);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_38);
return x_13;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_dec(x_13);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_4, 1);
lean_inc(x_42);
lean_dec(x_4);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_44, 0, x_3);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_39);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_13);
if (x_46 == 0)
{
return x_13;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
case 3:
{
uint8_t x_50; 
lean_dec(x_4);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_9);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_9, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_10, 0);
lean_inc(x_52);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_52);
return x_9;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_9, 1);
lean_inc(x_53);
lean_dec(x_9);
x_54 = lean_ctor_get(x_10, 0);
lean_inc(x_54);
lean_dec(x_10);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
default: 
{
uint8_t x_56; 
lean_dec(x_10);
x_56 = !lean_is_exclusive(x_9);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_57 = lean_ctor_get(x_9, 1);
x_58 = lean_ctor_get(x_9, 0);
lean_dec(x_58);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_4, 1);
lean_inc(x_61);
lean_dec(x_4);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
lean_ctor_set(x_62, 2, x_61);
x_63 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_63, 0, x_3);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_63);
return x_9;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_ctor_get(x_9, 1);
lean_inc(x_64);
lean_dec(x_9);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 1);
lean_inc(x_67);
lean_dec(x_4);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_67);
x_69 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_69, 0, x_3);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_64);
return x_70;
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_4);
lean_dec(x_3);
x_71 = !lean_is_exclusive(x_9);
if (x_71 == 0)
{
return x_9;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_9, 0);
x_73 = lean_ctor_get(x_9, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_9);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_6);
if (x_75 == 0)
{
return x_6;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_6, 0);
x_77 = lean_ctor_get(x_6, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_6);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
lean_inc(x_6);
x_8 = lean_apply_3(x_1, x_4, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l___private_Init_Lean_Meta_InferType_5__getLevel(x_2, x_1, x_9, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_level_mk_imax(x_13, x_5);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_level_mk_imax(x_15, x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_5);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l___private_Init_Lean_Meta_InferType_5__getLevel(x_1, x_2, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1___boxed), 7, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_1);
x_11 = lean_array_get_size(x_3);
x_12 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1;
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___rarg(x_12, lean_box(0), x_3, x_10, x_11, lean_box(0), x_8);
lean_dec(x_11);
x_14 = lean_apply_2(x_13, x_5, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Lean_Level_normalize___main(x_16);
lean_dec(x_16);
x_18 = lean_expr_mk_sort(x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = l_Lean_Level_normalize___main(x_19);
lean_dec(x_19);
x_22 = lean_expr_mk_sort(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_7);
if (x_28 == 0)
{
return x_7;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__2), 6, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_isClassExpensive), 4, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_box(0);
x_11 = 0;
x_12 = l_Array_empty___closed__1;
x_13 = lean_unsigned_to_nat(0u);
x_14 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___rarg(x_1, x_9, x_11, x_10, x_6, x_8, x_12, x_13, x_3, x_4, x_5);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_14, 1);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 2);
lean_dec(x_18);
lean_ctor_set(x_16, 2, x_7);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_16, 0);
x_20 = lean_ctor_get(x_16, 1);
x_21 = lean_ctor_get(x_16, 3);
x_22 = lean_ctor_get(x_16, 4);
x_23 = lean_ctor_get(x_16, 5);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_16);
x_24 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_7);
lean_ctor_set(x_24, 3, x_21);
lean_ctor_set(x_24, 4, x_22);
lean_ctor_set(x_24, 5, x_23);
lean_ctor_set(x_14, 1, x_24);
return x_14;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_14, 1);
x_26 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
lean_inc(x_26);
lean_dec(x_14);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 4);
lean_inc(x_30);
x_31 = lean_ctor_get(x_25, 5);
lean_inc(x_31);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 lean_ctor_release(x_25, 3);
 lean_ctor_release(x_25, 4);
 lean_ctor_release(x_25, 5);
 x_32 = x_25;
} else {
 lean_dec_ref(x_25);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 6, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_7);
lean_ctor_set(x_33, 3, x_29);
lean_ctor_set(x_33, 4, x_30);
lean_ctor_set(x_33, 5, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_14);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_14, 1);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 2);
lean_dec(x_38);
lean_ctor_set(x_36, 2, x_7);
return x_14;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_36, 0);
x_40 = lean_ctor_get(x_36, 1);
x_41 = lean_ctor_get(x_36, 3);
x_42 = lean_ctor_get(x_36, 4);
x_43 = lean_ctor_get(x_36, 5);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_36);
x_44 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_40);
lean_ctor_set(x_44, 2, x_7);
lean_ctor_set(x_44, 3, x_41);
lean_ctor_set(x_44, 4, x_42);
lean_ctor_set(x_44, 5, x_43);
lean_ctor_set(x_14, 1, x_44);
return x_14;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_14, 1);
x_46 = lean_ctor_get(x_14, 0);
lean_inc(x_45);
lean_inc(x_46);
lean_dec(x_14);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_45, 3);
lean_inc(x_49);
x_50 = lean_ctor_get(x_45, 4);
lean_inc(x_50);
x_51 = lean_ctor_get(x_45, 5);
lean_inc(x_51);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 lean_ctor_release(x_45, 2);
 lean_ctor_release(x_45, 3);
 lean_ctor_release(x_45, 4);
 lean_ctor_release(x_45, 5);
 x_52 = x_45;
} else {
 lean_dec_ref(x_45);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 6, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_48);
lean_ctor_set(x_53, 2, x_7);
lean_ctor_set(x_53, 3, x_49);
lean_ctor_set(x_53, 4, x_50);
lean_ctor_set(x_53, 5, x_51);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_46);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Meta_InferType_6__inferForallType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = lean_apply_3(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Meta_mkForall(x_2, x_7, x_4, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_7__inferLambdaType___lambda__1), 5, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Lean_Meta_lambdaTelescope___rarg(x_1, x_3, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
x_8 = l_Lean_Meta_mkFreshId___rarg(x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_9);
x_11 = lean_expr_mk_fvar(x_9);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_local_ctx_mk_local_decl(x_13, x_9, x_1, x_3, x_2);
lean_ctor_set(x_5, 1, x_14);
x_15 = lean_apply_3(x_4, x_11, x_5, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_15, 1);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 2);
lean_dec(x_19);
lean_ctor_set(x_17, 2, x_7);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
x_22 = lean_ctor_get(x_17, 3);
x_23 = lean_ctor_get(x_17, 4);
x_24 = lean_ctor_get(x_17, 5);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
x_25 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_7);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
lean_ctor_set(x_15, 1, x_25);
return x_15;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_ctor_get(x_15, 1);
x_27 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_26, 4);
lean_inc(x_31);
x_32 = lean_ctor_get(x_26, 5);
lean_inc(x_32);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 lean_ctor_release(x_26, 4);
 lean_ctor_release(x_26, 5);
 x_33 = x_26;
} else {
 lean_dec_ref(x_26);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 6, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_29);
lean_ctor_set(x_34, 2, x_7);
lean_ctor_set(x_34, 3, x_30);
lean_ctor_set(x_34, 4, x_31);
lean_ctor_set(x_34, 5, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_27);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_15);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_15, 1);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 2);
lean_dec(x_39);
lean_ctor_set(x_37, 2, x_7);
return x_15;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
x_42 = lean_ctor_get(x_37, 3);
x_43 = lean_ctor_get(x_37, 4);
x_44 = lean_ctor_get(x_37, 5);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_37);
x_45 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_7);
lean_ctor_set(x_45, 3, x_42);
lean_ctor_set(x_45, 4, x_43);
lean_ctor_set(x_45, 5, x_44);
lean_ctor_set(x_15, 1, x_45);
return x_15;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_46 = lean_ctor_get(x_15, 1);
x_47 = lean_ctor_get(x_15, 0);
lean_inc(x_46);
lean_inc(x_47);
lean_dec(x_15);
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_46, 3);
lean_inc(x_50);
x_51 = lean_ctor_get(x_46, 4);
lean_inc(x_51);
x_52 = lean_ctor_get(x_46, 5);
lean_inc(x_52);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 lean_ctor_release(x_46, 4);
 lean_ctor_release(x_46, 5);
 x_53 = x_46;
} else {
 lean_dec_ref(x_46);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 6, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_7);
lean_ctor_set(x_54, 3, x_50);
lean_ctor_set(x_54, 4, x_51);
lean_ctor_set(x_54, 5, x_52);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_5, 0);
x_57 = lean_ctor_get(x_5, 1);
x_58 = lean_ctor_get(x_5, 2);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_5);
x_59 = lean_local_ctx_mk_local_decl(x_57, x_9, x_1, x_3, x_2);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_58);
x_61 = lean_apply_3(x_4, x_11, x_60, x_10);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_64 = x_61;
} else {
 lean_dec_ref(x_61);
 x_64 = lean_box(0);
}
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_62, 3);
lean_inc(x_67);
x_68 = lean_ctor_get(x_62, 4);
lean_inc(x_68);
x_69 = lean_ctor_get(x_62, 5);
lean_inc(x_69);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 lean_ctor_release(x_62, 3);
 lean_ctor_release(x_62, 4);
 lean_ctor_release(x_62, 5);
 x_70 = x_62;
} else {
 lean_dec_ref(x_62);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 6, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_66);
lean_ctor_set(x_71, 2, x_7);
lean_ctor_set(x_71, 3, x_67);
lean_ctor_set(x_71, 4, x_68);
lean_ctor_set(x_71, 5, x_69);
if (lean_is_scalar(x_64)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_64;
}
lean_ctor_set(x_72, 0, x_63);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_73 = lean_ctor_get(x_61, 1);
lean_inc(x_73);
x_74 = lean_ctor_get(x_61, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_75 = x_61;
} else {
 lean_dec_ref(x_61);
 x_75 = lean_box(0);
}
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_73, 3);
lean_inc(x_78);
x_79 = lean_ctor_get(x_73, 4);
lean_inc(x_79);
x_80 = lean_ctor_get(x_73, 5);
lean_inc(x_80);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 lean_ctor_release(x_73, 2);
 lean_ctor_release(x_73, 3);
 lean_ctor_release(x_73, 4);
 lean_ctor_release(x_73, 5);
 x_81 = x_73;
} else {
 lean_dec_ref(x_73);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(0, 6, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_77);
lean_ctor_set(x_82, 2, x_7);
lean_ctor_set(x_82, 3, x_78);
lean_ctor_set(x_82, 4, x_79);
lean_ctor_set(x_82, 5, x_80);
if (lean_is_scalar(x_75)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_75;
}
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = l___private_Init_Lean_Meta_InferType_8__withLocalDecl___rarg(x_1, x_7, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_9__inferMVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_5);
x_6 = lean_metavar_ctx_find_decl(x_5, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
x_9 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_9__inferMVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_InferType_9__inferMVarType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_10__inferFVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_5 = lean_local_ctx_find(x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
x_12 = l_Lean_LocalDecl_type(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_expr_equal(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_expr_equal(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_expr_hash(x_2);
x_5 = l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_expr_equal(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_expr_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_expr_equal(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_expr_equal(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_expr_equal(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__6(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_expr_hash(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_expr_hash(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_11__checkInferTypeCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_6, x_1);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_apply_2(x_2, x_3, x_4);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_9, 2);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_18 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_17, x_1, x_12);
lean_ctor_set(x_10, 0, x_18);
return x_8;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
lean_inc(x_12);
x_21 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_19, x_1, x_12);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_9, 2, x_22);
return x_8;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
x_25 = lean_ctor_get(x_9, 3);
x_26 = lean_ctor_get(x_9, 4);
x_27 = lean_ctor_get(x_9, 5);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_28 = lean_ctor_get(x_10, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_30 = x_10;
} else {
 lean_dec_ref(x_10);
 x_30 = lean_box(0);
}
lean_inc(x_12);
x_31 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_28, x_1, x_12);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
x_33 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_24);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_25);
lean_ctor_set(x_33, 4, x_26);
lean_ctor_set(x_33, 5, x_27);
lean_ctor_set(x_8, 1, x_33);
return x_8;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_34 = lean_ctor_get(x_8, 0);
lean_inc(x_34);
lean_dec(x_8);
x_35 = lean_ctor_get(x_9, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_9, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_9, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_9, 4);
lean_inc(x_38);
x_39 = lean_ctor_get(x_9, 5);
lean_inc(x_39);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 lean_ctor_release(x_9, 4);
 lean_ctor_release(x_9, 5);
 x_40 = x_9;
} else {
 lean_dec_ref(x_9);
 x_40 = lean_box(0);
}
x_41 = lean_ctor_get(x_10, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_43 = x_10;
} else {
 lean_dec_ref(x_10);
 x_43 = lean_box(0);
}
lean_inc(x_34);
x_44 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_41, x_1, x_34);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
if (lean_is_scalar(x_40)) {
 x_46 = lean_alloc_ctor(0, 6, 0);
} else {
 x_46 = x_40;
}
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 2, x_45);
lean_ctor_set(x_46, 3, x_37);
lean_ctor_set(x_46, 4, x_38);
lean_ctor_set(x_46, 5, x_39);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_34);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_8);
if (x_48 == 0)
{
return x_8;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_8, 0);
x_50 = lean_ctor_get(x_8, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_8);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_ctor_get(x_7, 0);
lean_inc(x_52);
lean_dec(x_7);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_4);
return x_53;
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__7(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Meta_inferTypeAuxAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_3);
lean_dec(x_1);
x_59 = lean_ctor_get(x_2, 0);
lean_inc(x_59);
lean_dec(x_2);
x_60 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_4);
return x_61;
}
case 1:
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_1);
x_62 = lean_ctor_get(x_2, 0);
lean_inc(x_62);
lean_dec(x_2);
x_63 = l___private_Init_Lean_Meta_InferType_10__inferFVarType(x_62, x_3, x_4);
return x_63;
}
case 2:
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_64 = lean_ctor_get(x_2, 0);
lean_inc(x_64);
lean_dec(x_2);
x_65 = l___private_Init_Lean_Meta_InferType_9__inferMVarType(x_64, x_3, x_4);
lean_dec(x_3);
return x_65;
}
case 3:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_2, 0);
lean_inc(x_66);
lean_dec(x_2);
x_67 = lean_level_mk_succ(x_66);
x_68 = lean_expr_mk_sort(x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_4);
return x_69;
}
case 4:
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_1);
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
lean_dec(x_2);
x_72 = l___private_Init_Lean_Meta_InferType_3__inferConstType(x_70, x_71, x_3, x_4);
lean_dec(x_3);
return x_72;
}
case 5:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_73 = lean_ctor_get(x_2, 0);
lean_inc(x_73);
lean_inc(x_1);
x_74 = lean_alloc_closure((void*)(l_Lean_Meta_inferTypeAuxAux___main), 4, 1);
lean_closure_set(x_74, 0, x_1);
x_75 = l_Lean_Expr_getAppFn___main(x_73);
lean_dec(x_73);
x_76 = lean_unsigned_to_nat(0u);
x_77 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_76);
x_78 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_77);
x_79 = lean_mk_array(x_77, x_78);
x_80 = lean_unsigned_to_nat(1u);
x_81 = lean_nat_sub(x_77, x_80);
lean_dec(x_77);
lean_inc(x_2);
x_82 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_2, x_79, x_81);
x_83 = lean_ctor_get(x_4, 2);
lean_inc(x_83);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_Lean_ExprStructEq_HasBeq;
x_86 = l_Lean_ExprStructEq_Hashable;
lean_inc(x_2);
x_87 = l_PersistentHashMap_find___rarg(x_85, x_86, x_84, x_2);
lean_dec(x_84);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = l___private_Init_Lean_Meta_InferType_2__inferAppType(x_1, x_74, x_75, x_82, x_3, x_4);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
x_90 = lean_ctor_get(x_89, 2);
lean_inc(x_90);
x_91 = !lean_is_exclusive(x_88);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_92 = lean_ctor_get(x_88, 0);
x_93 = lean_ctor_get(x_88, 1);
lean_dec(x_93);
x_94 = !lean_is_exclusive(x_89);
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_89, 2);
lean_dec(x_95);
x_96 = !lean_is_exclusive(x_90);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
x_98 = l_PersistentHashMap_insert___rarg(x_85, x_86, x_97, x_2, x_92);
lean_ctor_set(x_90, 0, x_98);
return x_88;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_90, 0);
x_100 = lean_ctor_get(x_90, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_90);
lean_inc(x_92);
x_101 = l_PersistentHashMap_insert___rarg(x_85, x_86, x_99, x_2, x_92);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
lean_ctor_set(x_89, 2, x_102);
return x_88;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_103 = lean_ctor_get(x_89, 0);
x_104 = lean_ctor_get(x_89, 1);
x_105 = lean_ctor_get(x_89, 3);
x_106 = lean_ctor_get(x_89, 4);
x_107 = lean_ctor_get(x_89, 5);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_89);
x_108 = lean_ctor_get(x_90, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_90, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_110 = x_90;
} else {
 lean_dec_ref(x_90);
 x_110 = lean_box(0);
}
lean_inc(x_92);
x_111 = l_PersistentHashMap_insert___rarg(x_85, x_86, x_108, x_2, x_92);
if (lean_is_scalar(x_110)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_110;
}
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_109);
x_113 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_113, 0, x_103);
lean_ctor_set(x_113, 1, x_104);
lean_ctor_set(x_113, 2, x_112);
lean_ctor_set(x_113, 3, x_105);
lean_ctor_set(x_113, 4, x_106);
lean_ctor_set(x_113, 5, x_107);
lean_ctor_set(x_88, 1, x_113);
return x_88;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_114 = lean_ctor_get(x_88, 0);
lean_inc(x_114);
lean_dec(x_88);
x_115 = lean_ctor_get(x_89, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_89, 1);
lean_inc(x_116);
x_117 = lean_ctor_get(x_89, 3);
lean_inc(x_117);
x_118 = lean_ctor_get(x_89, 4);
lean_inc(x_118);
x_119 = lean_ctor_get(x_89, 5);
lean_inc(x_119);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 lean_ctor_release(x_89, 2);
 lean_ctor_release(x_89, 3);
 lean_ctor_release(x_89, 4);
 lean_ctor_release(x_89, 5);
 x_120 = x_89;
} else {
 lean_dec_ref(x_89);
 x_120 = lean_box(0);
}
x_121 = lean_ctor_get(x_90, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_90, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_123 = x_90;
} else {
 lean_dec_ref(x_90);
 x_123 = lean_box(0);
}
lean_inc(x_114);
x_124 = l_PersistentHashMap_insert___rarg(x_85, x_86, x_121, x_2, x_114);
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_122);
if (lean_is_scalar(x_120)) {
 x_126 = lean_alloc_ctor(0, 6, 0);
} else {
 x_126 = x_120;
}
lean_ctor_set(x_126, 0, x_115);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_125);
lean_ctor_set(x_126, 3, x_117);
lean_ctor_set(x_126, 4, x_118);
lean_ctor_set(x_126, 5, x_119);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_114);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
else
{
uint8_t x_128; 
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_88);
if (x_128 == 0)
{
return x_88;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_88, 0);
x_130 = lean_ctor_get(x_88, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_88);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_82);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = lean_ctor_get(x_87, 0);
lean_inc(x_132);
lean_dec(x_87);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_4);
return x_133;
}
}
case 7:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_inc(x_1);
x_134 = lean_alloc_closure((void*)(l_Lean_Meta_inferTypeAuxAux___main), 4, 1);
lean_closure_set(x_134, 0, x_1);
x_135 = lean_ctor_get(x_4, 2);
lean_inc(x_135);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
lean_dec(x_135);
x_137 = l_Lean_ExprStructEq_HasBeq;
x_138 = l_Lean_ExprStructEq_Hashable;
lean_inc(x_2);
x_139 = l_PersistentHashMap_find___rarg(x_137, x_138, x_136, x_2);
lean_dec(x_136);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; 
lean_inc(x_2);
x_140 = l___private_Init_Lean_Meta_InferType_6__inferForallType(x_1, x_134, x_2, x_3, x_4);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_141, 2);
lean_inc(x_142);
x_143 = !lean_is_exclusive(x_140);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_144 = lean_ctor_get(x_140, 0);
x_145 = lean_ctor_get(x_140, 1);
lean_dec(x_145);
x_146 = !lean_is_exclusive(x_141);
if (x_146 == 0)
{
lean_object* x_147; uint8_t x_148; 
x_147 = lean_ctor_get(x_141, 2);
lean_dec(x_147);
x_148 = !lean_is_exclusive(x_142);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_142, 0);
lean_inc(x_144);
x_150 = l_PersistentHashMap_insert___rarg(x_137, x_138, x_149, x_2, x_144);
lean_ctor_set(x_142, 0, x_150);
return x_140;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_142, 0);
x_152 = lean_ctor_get(x_142, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_142);
lean_inc(x_144);
x_153 = l_PersistentHashMap_insert___rarg(x_137, x_138, x_151, x_2, x_144);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
lean_ctor_set(x_141, 2, x_154);
return x_140;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_155 = lean_ctor_get(x_141, 0);
x_156 = lean_ctor_get(x_141, 1);
x_157 = lean_ctor_get(x_141, 3);
x_158 = lean_ctor_get(x_141, 4);
x_159 = lean_ctor_get(x_141, 5);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_141);
x_160 = lean_ctor_get(x_142, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_142, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_162 = x_142;
} else {
 lean_dec_ref(x_142);
 x_162 = lean_box(0);
}
lean_inc(x_144);
x_163 = l_PersistentHashMap_insert___rarg(x_137, x_138, x_160, x_2, x_144);
if (lean_is_scalar(x_162)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_162;
}
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_161);
x_165 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_165, 0, x_155);
lean_ctor_set(x_165, 1, x_156);
lean_ctor_set(x_165, 2, x_164);
lean_ctor_set(x_165, 3, x_157);
lean_ctor_set(x_165, 4, x_158);
lean_ctor_set(x_165, 5, x_159);
lean_ctor_set(x_140, 1, x_165);
return x_140;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_166 = lean_ctor_get(x_140, 0);
lean_inc(x_166);
lean_dec(x_140);
x_167 = lean_ctor_get(x_141, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_141, 1);
lean_inc(x_168);
x_169 = lean_ctor_get(x_141, 3);
lean_inc(x_169);
x_170 = lean_ctor_get(x_141, 4);
lean_inc(x_170);
x_171 = lean_ctor_get(x_141, 5);
lean_inc(x_171);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 lean_ctor_release(x_141, 2);
 lean_ctor_release(x_141, 3);
 lean_ctor_release(x_141, 4);
 lean_ctor_release(x_141, 5);
 x_172 = x_141;
} else {
 lean_dec_ref(x_141);
 x_172 = lean_box(0);
}
x_173 = lean_ctor_get(x_142, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_142, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_175 = x_142;
} else {
 lean_dec_ref(x_142);
 x_175 = lean_box(0);
}
lean_inc(x_166);
x_176 = l_PersistentHashMap_insert___rarg(x_137, x_138, x_173, x_2, x_166);
if (lean_is_scalar(x_175)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_175;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_174);
if (lean_is_scalar(x_172)) {
 x_178 = lean_alloc_ctor(0, 6, 0);
} else {
 x_178 = x_172;
}
lean_ctor_set(x_178, 0, x_167);
lean_ctor_set(x_178, 1, x_168);
lean_ctor_set(x_178, 2, x_177);
lean_ctor_set(x_178, 3, x_169);
lean_ctor_set(x_178, 4, x_170);
lean_ctor_set(x_178, 5, x_171);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_166);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
else
{
uint8_t x_180; 
lean_dec(x_2);
x_180 = !lean_is_exclusive(x_140);
if (x_180 == 0)
{
return x_140;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_140, 0);
x_182 = lean_ctor_get(x_140, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_140);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
else
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_134);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_184 = lean_ctor_get(x_139, 0);
lean_inc(x_184);
lean_dec(x_139);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_4);
return x_185;
}
}
case 9:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_3);
lean_dec(x_1);
x_186 = lean_ctor_get(x_2, 0);
lean_inc(x_186);
lean_dec(x_2);
x_187 = l_Lean_Literal_type(x_186);
lean_dec(x_186);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_4);
return x_188;
}
case 10:
{
lean_object* x_189; 
x_189 = lean_ctor_get(x_2, 1);
lean_inc(x_189);
lean_dec(x_2);
x_2 = x_189;
goto _start;
}
case 11:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_191 = lean_ctor_get(x_2, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_2, 1);
lean_inc(x_192);
x_193 = lean_ctor_get(x_2, 2);
lean_inc(x_193);
lean_inc(x_1);
x_194 = lean_alloc_closure((void*)(l_Lean_Meta_inferTypeAuxAux___main), 4, 1);
lean_closure_set(x_194, 0, x_1);
x_195 = lean_ctor_get(x_4, 2);
lean_inc(x_195);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
lean_dec(x_195);
x_197 = l_Lean_ExprStructEq_HasBeq;
x_198 = l_Lean_ExprStructEq_Hashable;
lean_inc(x_2);
x_199 = l_PersistentHashMap_find___rarg(x_197, x_198, x_196, x_2);
lean_dec(x_196);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; 
x_200 = l___private_Init_Lean_Meta_InferType_4__inferProjType(x_1, x_194, x_191, x_192, x_193, x_3, x_4);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; uint8_t x_203; 
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
x_202 = lean_ctor_get(x_201, 2);
lean_inc(x_202);
x_203 = !lean_is_exclusive(x_200);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_204 = lean_ctor_get(x_200, 0);
x_205 = lean_ctor_get(x_200, 1);
lean_dec(x_205);
x_206 = !lean_is_exclusive(x_201);
if (x_206 == 0)
{
lean_object* x_207; uint8_t x_208; 
x_207 = lean_ctor_get(x_201, 2);
lean_dec(x_207);
x_208 = !lean_is_exclusive(x_202);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; 
x_209 = lean_ctor_get(x_202, 0);
lean_inc(x_204);
x_210 = l_PersistentHashMap_insert___rarg(x_197, x_198, x_209, x_2, x_204);
lean_ctor_set(x_202, 0, x_210);
return x_200;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_211 = lean_ctor_get(x_202, 0);
x_212 = lean_ctor_get(x_202, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_202);
lean_inc(x_204);
x_213 = l_PersistentHashMap_insert___rarg(x_197, x_198, x_211, x_2, x_204);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
lean_ctor_set(x_201, 2, x_214);
return x_200;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_215 = lean_ctor_get(x_201, 0);
x_216 = lean_ctor_get(x_201, 1);
x_217 = lean_ctor_get(x_201, 3);
x_218 = lean_ctor_get(x_201, 4);
x_219 = lean_ctor_get(x_201, 5);
lean_inc(x_219);
lean_inc(x_218);
lean_inc(x_217);
lean_inc(x_216);
lean_inc(x_215);
lean_dec(x_201);
x_220 = lean_ctor_get(x_202, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_202, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_222 = x_202;
} else {
 lean_dec_ref(x_202);
 x_222 = lean_box(0);
}
lean_inc(x_204);
x_223 = l_PersistentHashMap_insert___rarg(x_197, x_198, x_220, x_2, x_204);
if (lean_is_scalar(x_222)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_222;
}
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_221);
x_225 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_225, 0, x_215);
lean_ctor_set(x_225, 1, x_216);
lean_ctor_set(x_225, 2, x_224);
lean_ctor_set(x_225, 3, x_217);
lean_ctor_set(x_225, 4, x_218);
lean_ctor_set(x_225, 5, x_219);
lean_ctor_set(x_200, 1, x_225);
return x_200;
}
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_226 = lean_ctor_get(x_200, 0);
lean_inc(x_226);
lean_dec(x_200);
x_227 = lean_ctor_get(x_201, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_201, 1);
lean_inc(x_228);
x_229 = lean_ctor_get(x_201, 3);
lean_inc(x_229);
x_230 = lean_ctor_get(x_201, 4);
lean_inc(x_230);
x_231 = lean_ctor_get(x_201, 5);
lean_inc(x_231);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 lean_ctor_release(x_201, 2);
 lean_ctor_release(x_201, 3);
 lean_ctor_release(x_201, 4);
 lean_ctor_release(x_201, 5);
 x_232 = x_201;
} else {
 lean_dec_ref(x_201);
 x_232 = lean_box(0);
}
x_233 = lean_ctor_get(x_202, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_202, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_235 = x_202;
} else {
 lean_dec_ref(x_202);
 x_235 = lean_box(0);
}
lean_inc(x_226);
x_236 = l_PersistentHashMap_insert___rarg(x_197, x_198, x_233, x_2, x_226);
if (lean_is_scalar(x_235)) {
 x_237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_237 = x_235;
}
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_234);
if (lean_is_scalar(x_232)) {
 x_238 = lean_alloc_ctor(0, 6, 0);
} else {
 x_238 = x_232;
}
lean_ctor_set(x_238, 0, x_227);
lean_ctor_set(x_238, 1, x_228);
lean_ctor_set(x_238, 2, x_237);
lean_ctor_set(x_238, 3, x_229);
lean_ctor_set(x_238, 4, x_230);
lean_ctor_set(x_238, 5, x_231);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_226);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
else
{
uint8_t x_240; 
lean_dec(x_2);
x_240 = !lean_is_exclusive(x_200);
if (x_240 == 0)
{
return x_200;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_200, 0);
x_242 = lean_ctor_get(x_200, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_200);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
else
{
lean_object* x_244; lean_object* x_245; 
lean_dec(x_194);
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_191);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_244 = lean_ctor_get(x_199, 0);
lean_inc(x_244);
lean_dec(x_199);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_4);
return x_245;
}
}
default: 
{
lean_object* x_246; 
x_246 = lean_box(0);
x_5 = x_246;
goto block_58;
}
}
block_58:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_inferTypeAuxAux___main), 4, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_ExprStructEq_HasBeq;
x_10 = l_Lean_ExprStructEq_Hashable;
lean_inc(x_2);
x_11 = l_PersistentHashMap_find___rarg(x_9, x_10, x_8, x_2);
lean_dec(x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_inc(x_2);
x_12 = l___private_Init_Lean_Meta_InferType_7__inferLambdaType(x_1, x_6, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 2);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_22 = l_PersistentHashMap_insert___rarg(x_9, x_10, x_21, x_2, x_16);
lean_ctor_set(x_14, 0, x_22);
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
lean_inc(x_16);
x_25 = l_PersistentHashMap_insert___rarg(x_9, x_10, x_23, x_2, x_16);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_13, 2, x_26);
return x_12;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
x_29 = lean_ctor_get(x_13, 3);
x_30 = lean_ctor_get(x_13, 4);
x_31 = lean_ctor_get(x_13, 5);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_32 = lean_ctor_get(x_14, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_34 = x_14;
} else {
 lean_dec_ref(x_14);
 x_34 = lean_box(0);
}
lean_inc(x_16);
x_35 = l_PersistentHashMap_insert___rarg(x_9, x_10, x_32, x_2, x_16);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
x_37 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_28);
lean_ctor_set(x_37, 2, x_36);
lean_ctor_set(x_37, 3, x_29);
lean_ctor_set(x_37, 4, x_30);
lean_ctor_set(x_37, 5, x_31);
lean_ctor_set(x_12, 1, x_37);
return x_12;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_38 = lean_ctor_get(x_12, 0);
lean_inc(x_38);
lean_dec(x_12);
x_39 = lean_ctor_get(x_13, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_13, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_13, 3);
lean_inc(x_41);
x_42 = lean_ctor_get(x_13, 4);
lean_inc(x_42);
x_43 = lean_ctor_get(x_13, 5);
lean_inc(x_43);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 lean_ctor_release(x_13, 4);
 lean_ctor_release(x_13, 5);
 x_44 = x_13;
} else {
 lean_dec_ref(x_13);
 x_44 = lean_box(0);
}
x_45 = lean_ctor_get(x_14, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_14, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_47 = x_14;
} else {
 lean_dec_ref(x_14);
 x_47 = lean_box(0);
}
lean_inc(x_38);
x_48 = l_PersistentHashMap_insert___rarg(x_9, x_10, x_45, x_2, x_38);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
if (lean_is_scalar(x_44)) {
 x_50 = lean_alloc_ctor(0, 6, 0);
} else {
 x_50 = x_44;
}
lean_ctor_set(x_50, 0, x_39);
lean_ctor_set(x_50, 1, x_40);
lean_ctor_set(x_50, 2, x_49);
lean_ctor_set(x_50, 3, x_41);
lean_ctor_set(x_50, 4, x_42);
lean_ctor_set(x_50, 5, x_43);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_38);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_12);
if (x_52 == 0)
{
return x_12;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_12, 0);
x_54 = lean_ctor_get(x_12, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_12);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_ctor_get(x_11, 0);
lean_inc(x_56);
lean_dec(x_11);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_4);
return x_57;
}
}
}
}
lean_object* l_Lean_Meta_inferTypeAuxAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_inferTypeAuxAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_is_class(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_array_fget(x_3, x_4);
x_20 = l_Lean_Expr_fvarId_x21(x_19);
lean_inc(x_5);
x_21 = l_Lean_Meta_getLocalDecl(x_20, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_24);
x_25 = l_Lean_Meta_isClassQuick___main(x_24, x_5, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_19);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_6 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_5);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_5, 2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_19);
x_38 = lean_array_push(x_36, x_37);
lean_ctor_set(x_5, 2, x_38);
x_4 = x_34;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = lean_ctor_get(x_5, 1);
x_42 = lean_ctor_get(x_5, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_19);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
x_4 = x_34;
x_5 = x_45;
x_6 = x_31;
goto _start;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_25, 1);
lean_inc(x_47);
lean_dec(x_25);
lean_inc(x_5);
lean_inc(x_1);
x_48 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(x_1, x_24, x_5, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_19);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_4, x_51);
lean_dec(x_4);
x_4 = x_52;
x_6 = x_50;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_4, x_56);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_5, 2);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_19);
x_61 = lean_array_push(x_59, x_60);
lean_ctor_set(x_5, 2, x_61);
x_4 = x_57;
x_6 = x_54;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_5, 0);
x_64 = lean_ctor_get(x_5, 1);
x_65 = lean_ctor_get(x_5, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_5);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_array_push(x_65, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_67);
x_4 = x_57;
x_5 = x_68;
x_6 = x_54;
goto _start;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_48);
if (x_70 == 0)
{
return x_48;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_48, 0);
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_48);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_25);
if (x_74 == 0)
{
return x_25;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_25, 0);
x_76 = lean_ctor_get(x_25, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_25);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_21);
if (x_78 == 0)
{
return x_21;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_21, 0);
x_80 = lean_ctor_get(x_21, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_21);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Expr_isForall(x_8);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_12) == 4)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_inc(x_13);
x_15 = lean_is_class(x_14, x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_10);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_10);
return x_21;
}
}
else
{
lean_object* x_22; 
x_22 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_9);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_usingDefault), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_9);
x_15 = lean_box(x_2);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_9);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1___boxed), 10, 7);
lean_closure_set(x_16, 0, x_9);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_15);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_5);
lean_closure_set(x_16, 6, x_8);
x_17 = lean_array_get_size(x_10);
x_18 = lean_nat_dec_lt(x_11, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = l_ReaderT_bind___at_Lean_Meta_forallTelescope___spec__3___rarg(x_14, x_16, x_12, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_14);
x_20 = lean_array_fget(x_10, x_11);
x_21 = l_Lean_Expr_fvarId_x21(x_20);
lean_inc(x_12);
x_22 = l_Lean_Meta_getLocalDecl(x_21, x_12, x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_LocalDecl_type(x_23);
lean_dec(x_23);
lean_inc(x_25);
x_26 = l_Lean_Meta_isClassQuick___main(x_25, x_12, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_20);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_11, x_29);
lean_dec(x_11);
x_11 = x_30;
x_13 = x_28;
goto _start;
}
case 1:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_11, x_34);
lean_dec(x_11);
x_36 = !lean_is_exclusive(x_12);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_12, 2);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_20);
x_39 = lean_array_push(x_37, x_38);
lean_ctor_set(x_12, 2, x_39);
x_11 = x_35;
x_13 = x_32;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_12, 0);
x_42 = lean_ctor_get(x_12, 1);
x_43 = lean_ctor_get(x_12, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_12);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_20);
x_45 = lean_array_push(x_43, x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_45);
x_11 = x_35;
x_12 = x_46;
x_13 = x_32;
goto _start;
}
}
default: 
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_1);
x_49 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(x_1, x_25, x_12, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_20);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_11, x_52);
lean_dec(x_11);
x_11 = x_53;
x_13 = x_51;
goto _start;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_ctor_get(x_50, 0);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_11, x_57);
lean_dec(x_11);
x_59 = !lean_is_exclusive(x_12);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_12, 2);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_20);
x_62 = lean_array_push(x_60, x_61);
lean_ctor_set(x_12, 2, x_62);
x_11 = x_58;
x_13 = x_55;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_12, 0);
x_65 = lean_ctor_get(x_12, 1);
x_66 = lean_ctor_get(x_12, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_12);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_56);
lean_ctor_set(x_67, 1, x_20);
x_68 = lean_array_push(x_66, x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_65);
lean_ctor_set(x_69, 2, x_68);
x_11 = x_58;
x_12 = x_69;
x_13 = x_55;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_49);
if (x_71 == 0)
{
return x_49;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_49, 0);
x_73 = lean_ctor_get(x_49, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_49);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_25);
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_26);
if (x_75 == 0)
{
return x_26;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_26, 0);
x_77 = lean_ctor_get(x_26, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_26);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_22);
if (x_79 == 0)
{
return x_22;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_22, 0);
x_81 = lean_ctor_get(x_22, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_22);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_is_class(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_array_fget(x_3, x_4);
x_20 = l_Lean_Expr_fvarId_x21(x_19);
lean_inc(x_5);
x_21 = l_Lean_Meta_getLocalDecl(x_20, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_24);
x_25 = l_Lean_Meta_isClassQuick___main(x_24, x_5, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_19);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_6 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_5);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_5, 2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_19);
x_38 = lean_array_push(x_36, x_37);
lean_ctor_set(x_5, 2, x_38);
x_4 = x_34;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = lean_ctor_get(x_5, 1);
x_42 = lean_ctor_get(x_5, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_19);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
x_4 = x_34;
x_5 = x_45;
x_6 = x_31;
goto _start;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_25, 1);
lean_inc(x_47);
lean_dec(x_25);
lean_inc(x_5);
lean_inc(x_1);
x_48 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(x_1, x_24, x_5, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_19);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_4, x_51);
lean_dec(x_4);
x_4 = x_52;
x_6 = x_50;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_4, x_56);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_5, 2);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_19);
x_61 = lean_array_push(x_59, x_60);
lean_ctor_set(x_5, 2, x_61);
x_4 = x_57;
x_6 = x_54;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_5, 0);
x_64 = lean_ctor_get(x_5, 1);
x_65 = lean_ctor_get(x_5, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_5);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_array_push(x_65, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_67);
x_4 = x_57;
x_5 = x_68;
x_6 = x_54;
goto _start;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_48);
if (x_70 == 0)
{
return x_48;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_48, 0);
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_48);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_25);
if (x_74 == 0)
{
return x_25;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_25, 0);
x_76 = lean_ctor_get(x_25, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_25);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_21);
if (x_78 == 0)
{
return x_21;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_21, 0);
x_80 = lean_ctor_get(x_21, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_21);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
if (lean_obj_tag(x_7) == 7)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_7, 2);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_array_get_size(x_5);
lean_inc(x_5);
x_28 = lean_expr_instantiate_rev_range(x_25, x_6, x_27, x_5);
lean_dec(x_27);
lean_dec(x_25);
x_29 = l_Lean_Meta_mkFreshId___rarg(x_9);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_30);
x_32 = lean_local_ctx_mk_local_decl(x_4, x_30, x_23, x_28, x_24);
x_33 = lean_expr_mk_fvar(x_30);
x_34 = lean_array_push(x_5, x_33);
if (lean_obj_tag(x_3) == 0)
{
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc(x_36);
x_37 = lean_array_get_size(x_34);
x_38 = lean_nat_dec_lt(x_37, x_36);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_3);
lean_inc(x_34);
x_39 = lean_expr_instantiate_rev_range(x_26, x_6, x_37, x_34);
lean_dec(x_37);
lean_dec(x_26);
x_40 = !lean_is_exclusive(x_8);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_8, 1);
lean_dec(x_41);
lean_ctor_set(x_8, 1, x_32);
x_42 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11(x_1, x_39, x_34, x_6, x_8, x_31);
lean_dec(x_34);
lean_dec(x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_32);
lean_ctor_set(x_45, 2, x_44);
x_46 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11(x_1, x_39, x_34, x_6, x_45, x_31);
lean_dec(x_34);
lean_dec(x_39);
return x_46;
}
}
else
{
lean_dec(x_37);
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
}
}
else
{
lean_object* x_48; 
x_48 = lean_box(0);
x_10 = x_48;
goto block_22;
}
block_22:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_11 = lean_array_get_size(x_5);
lean_inc(x_5);
x_12 = lean_expr_instantiate_rev_range(x_7, x_6, x_11, x_5);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_inc(x_4);
lean_ctor_set(x_8, 1, x_4);
if (x_2 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9(x_1, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_5);
lean_dec(x_12);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
lean_inc(x_4);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_4);
lean_ctor_set(x_19, 2, x_18);
if (x_2 == 0)
{
lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_20 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9(x_1, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_5);
lean_dec(x_12);
return x_20;
}
else
{
lean_object* x_21; 
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_21;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 4, x_10);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_inc(x_1);
lean_inc(x_2);
x_12 = lean_apply_3(x_1, x_2, x_11, x_5);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = l_Lean_Expr_isForall(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_inc(x_18);
x_20 = lean_is_class(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
x_21 = lean_box(0);
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
else
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
}
else
{
lean_object* x_23; 
lean_dec(x_17);
x_23 = lean_box(0);
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_12);
lean_dec(x_2);
x_24 = lean_ctor_get(x_15, 2);
lean_inc(x_24);
x_25 = 1;
x_26 = l_Array_empty___closed__1;
x_27 = lean_unsigned_to_nat(0u);
x_28 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(x_1, x_25, x_3, x_7, x_26, x_27, x_14, x_4, x_15);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_28, 1);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 2);
lean_dec(x_32);
lean_ctor_set(x_30, 2, x_24);
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 1);
x_35 = lean_ctor_get(x_30, 3);
x_36 = lean_ctor_get(x_30, 4);
x_37 = lean_ctor_get(x_30, 5);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_30);
x_38 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_35);
lean_ctor_set(x_38, 4, x_36);
lean_ctor_set(x_38, 5, x_37);
lean_ctor_set(x_28, 1, x_38);
return x_28;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_28, 1);
x_40 = lean_ctor_get(x_28, 0);
lean_inc(x_39);
lean_inc(x_40);
lean_dec(x_28);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_39, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_39, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_39, 5);
lean_inc(x_45);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 lean_ctor_release(x_39, 3);
 lean_ctor_release(x_39, 4);
 lean_ctor_release(x_39, 5);
 x_46 = x_39;
} else {
 lean_dec_ref(x_39);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 6, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_42);
lean_ctor_set(x_47, 2, x_24);
lean_ctor_set(x_47, 3, x_43);
lean_ctor_set(x_47, 4, x_44);
lean_ctor_set(x_47, 5, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_40);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_28);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_28, 1);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 2);
lean_dec(x_52);
lean_ctor_set(x_50, 2, x_24);
return x_28;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_50, 0);
x_54 = lean_ctor_get(x_50, 1);
x_55 = lean_ctor_get(x_50, 3);
x_56 = lean_ctor_get(x_50, 4);
x_57 = lean_ctor_get(x_50, 5);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_50);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_24);
lean_ctor_set(x_58, 3, x_55);
lean_ctor_set(x_58, 4, x_56);
lean_ctor_set(x_58, 5, x_57);
lean_ctor_set(x_28, 1, x_58);
return x_28;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_59 = lean_ctor_get(x_28, 1);
x_60 = lean_ctor_get(x_28, 0);
lean_inc(x_59);
lean_inc(x_60);
lean_dec(x_28);
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 3);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 4);
lean_inc(x_64);
x_65 = lean_ctor_get(x_59, 5);
lean_inc(x_65);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 lean_ctor_release(x_59, 2);
 lean_ctor_release(x_59, 3);
 lean_ctor_release(x_59, 4);
 lean_ctor_release(x_59, 5);
 x_66 = x_59;
} else {
 lean_dec_ref(x_59);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 6, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_62);
lean_ctor_set(x_67, 2, x_24);
lean_ctor_set(x_67, 3, x_63);
lean_ctor_set(x_67, 4, x_64);
lean_ctor_set(x_67, 5, x_65);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_69 = lean_ctor_get(x_12, 0);
x_70 = lean_ctor_get(x_12, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_12);
x_71 = l_Lean_Expr_isForall(x_69);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_69);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_72 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_72) == 4)
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
lean_inc(x_73);
x_75 = lean_is_class(x_74, x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_73);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_70);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_73);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_70);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_72);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_70);
return x_81;
}
}
else
{
lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_2);
x_82 = lean_ctor_get(x_70, 2);
lean_inc(x_82);
x_83 = 1;
x_84 = l_Array_empty___closed__1;
x_85 = lean_unsigned_to_nat(0u);
x_86 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(x_1, x_83, x_3, x_7, x_84, x_85, x_69, x_4, x_70);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
 x_89 = lean_box(0);
}
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
x_92 = lean_ctor_get(x_87, 3);
lean_inc(x_92);
x_93 = lean_ctor_get(x_87, 4);
lean_inc(x_93);
x_94 = lean_ctor_get(x_87, 5);
lean_inc(x_94);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 lean_ctor_release(x_87, 2);
 lean_ctor_release(x_87, 3);
 lean_ctor_release(x_87, 4);
 lean_ctor_release(x_87, 5);
 x_95 = x_87;
} else {
 lean_dec_ref(x_87);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 6, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_91);
lean_ctor_set(x_96, 2, x_82);
lean_ctor_set(x_96, 3, x_92);
lean_ctor_set(x_96, 4, x_93);
lean_ctor_set(x_96, 5, x_94);
if (lean_is_scalar(x_89)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_89;
}
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_98 = lean_ctor_get(x_86, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_86, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_100 = x_86;
} else {
 lean_dec_ref(x_86);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_98, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_98, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_98, 4);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 5);
lean_inc(x_105);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 lean_ctor_release(x_98, 2);
 lean_ctor_release(x_98, 3);
 lean_ctor_release(x_98, 4);
 lean_ctor_release(x_98, 5);
 x_106 = x_98;
} else {
 lean_dec_ref(x_98);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(0, 6, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_101);
lean_ctor_set(x_107, 1, x_102);
lean_ctor_set(x_107, 2, x_82);
lean_ctor_set(x_107, 3, x_103);
lean_ctor_set(x_107, 4, x_104);
lean_ctor_set(x_107, 5, x_105);
if (lean_is_scalar(x_100)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_100;
}
lean_ctor_set(x_108, 0, x_99);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_12);
if (x_109 == 0)
{
return x_12;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_12, 0);
x_111 = lean_ctor_get(x_12, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_12);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
lean_object* x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_113 = lean_ctor_get(x_6, 0);
x_114 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_115 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_116 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_117 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
lean_inc(x_113);
lean_dec(x_6);
x_118 = 1;
x_119 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_119, 0, x_113);
lean_ctor_set_uint8(x_119, sizeof(void*)*1, x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 1, x_115);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 2, x_116);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 3, x_117);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 4, x_118);
lean_inc(x_7);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_7);
lean_ctor_set(x_120, 2, x_8);
lean_inc(x_1);
lean_inc(x_2);
x_121 = lean_apply_3(x_1, x_2, x_120, x_5);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = l_Lean_Expr_isForall(x_122);
if (x_125 == 0)
{
lean_object* x_126; 
lean_dec(x_122);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_126 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_126) == 4)
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_ctor_get(x_123, 0);
lean_inc(x_128);
lean_inc(x_127);
x_129 = lean_is_class(x_128, x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
lean_dec(x_127);
x_130 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_124;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_123);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_132, 0, x_127);
if (lean_is_scalar(x_124)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_124;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_123);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_126);
x_134 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_124;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_123);
return x_135;
}
}
else
{
lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_124);
lean_dec(x_2);
x_136 = lean_ctor_get(x_123, 2);
lean_inc(x_136);
x_137 = 1;
x_138 = l_Array_empty___closed__1;
x_139 = lean_unsigned_to_nat(0u);
x_140 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(x_1, x_137, x_3, x_7, x_138, x_139, x_122, x_4, x_123);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_143 = x_140;
} else {
 lean_dec_ref(x_140);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_141, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_141, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_141, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_141, 4);
lean_inc(x_147);
x_148 = lean_ctor_get(x_141, 5);
lean_inc(x_148);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 lean_ctor_release(x_141, 2);
 lean_ctor_release(x_141, 3);
 lean_ctor_release(x_141, 4);
 lean_ctor_release(x_141, 5);
 x_149 = x_141;
} else {
 lean_dec_ref(x_141);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(0, 6, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_144);
lean_ctor_set(x_150, 1, x_145);
lean_ctor_set(x_150, 2, x_136);
lean_ctor_set(x_150, 3, x_146);
lean_ctor_set(x_150, 4, x_147);
lean_ctor_set(x_150, 5, x_148);
if (lean_is_scalar(x_143)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_143;
}
lean_ctor_set(x_151, 0, x_142);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_152 = lean_ctor_get(x_140, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_140, 0);
lean_inc(x_153);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_154 = x_140;
} else {
 lean_dec_ref(x_140);
 x_154 = lean_box(0);
}
x_155 = lean_ctor_get(x_152, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_152, 1);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 3);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 4);
lean_inc(x_158);
x_159 = lean_ctor_get(x_152, 5);
lean_inc(x_159);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 lean_ctor_release(x_152, 5);
 x_160 = x_152;
} else {
 lean_dec_ref(x_152);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(0, 6, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_155);
lean_ctor_set(x_161, 1, x_156);
lean_ctor_set(x_161, 2, x_136);
lean_ctor_set(x_161, 3, x_157);
lean_ctor_set(x_161, 4, x_158);
lean_ctor_set(x_161, 5, x_159);
if (lean_is_scalar(x_154)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_154;
}
lean_ctor_set(x_162, 0, x_153);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_163 = lean_ctor_get(x_121, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_121, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_165 = x_121;
} else {
 lean_dec_ref(x_121);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
}
}
lean_object* l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_box(0);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
x_9 = 2;
lean_ctor_set_uint8(x_7, sizeof(void*)*1 + 4, x_9);
x_10 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__7(x_1, x_2, x_5, x_3, x_4);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_13 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_14 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 2);
x_15 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 3);
lean_inc(x_11);
lean_dec(x_7);
x_16 = 2;
x_17 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_12);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 1, x_13);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 2, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 3, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 4, x_16);
lean_ctor_set(x_3, 0, x_17);
x_18 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__7(x_1, x_2, x_5, x_3, x_4);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get_uint8(x_19, sizeof(void*)*1);
x_24 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 1);
x_25 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 2);
x_26 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 3);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 x_27 = x_19;
} else {
 lean_dec_ref(x_19);
 x_27 = lean_box(0);
}
x_28 = 2;
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 1, 5);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 1, x_24);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 2, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 3, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 4, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_20);
lean_ctor_set(x_30, 2, x_21);
x_31 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__7(x_1, x_2, x_5, x_30, x_4);
return x_31;
}
}
}
lean_object* l_Lean_Meta_isClassExpensive___at_Lean_Meta_inferTypeAux___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_nat_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_5);
lean_inc(x_6);
x_10 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_3, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_mkForall(x_2, x_11, x_6, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_array_fget(x_4, x_5);
x_19 = l_Lean_Expr_fvarId_x21(x_18);
lean_inc(x_6);
x_20 = l_Lean_Meta_getLocalDecl(x_19, x_6, x_7);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_LocalDecl_type(x_21);
lean_dec(x_21);
lean_inc(x_23);
x_24 = l_Lean_Meta_isClassQuick___main(x_23, x_6, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
switch (lean_obj_tag(x_25)) {
case 0:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_18);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_5, x_27);
lean_dec(x_5);
x_5 = x_28;
x_7 = x_26;
goto _start;
}
case 1:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_23);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 0);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_5, x_32);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_6);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_6, 2);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_18);
x_37 = lean_array_push(x_35, x_36);
lean_ctor_set(x_6, 2, x_37);
x_5 = x_33;
x_7 = x_30;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_6, 0);
x_40 = lean_ctor_get(x_6, 1);
x_41 = lean_ctor_get(x_6, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_6);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_31);
lean_ctor_set(x_42, 1, x_18);
x_43 = lean_array_push(x_41, x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_40);
lean_ctor_set(x_44, 2, x_43);
x_5 = x_33;
x_6 = x_44;
x_7 = x_30;
goto _start;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_24, 1);
lean_inc(x_46);
lean_dec(x_24);
lean_inc(x_6);
lean_inc(x_1);
x_47 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__6(x_1, x_23, x_6, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_18);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_unsigned_to_nat(1u);
x_51 = lean_nat_add(x_5, x_50);
lean_dec(x_5);
x_5 = x_51;
x_7 = x_49;
goto _start;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_dec(x_47);
x_54 = lean_ctor_get(x_48, 0);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_add(x_5, x_55);
lean_dec(x_5);
x_57 = !lean_is_exclusive(x_6);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_6, 2);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_18);
x_60 = lean_array_push(x_58, x_59);
lean_ctor_set(x_6, 2, x_60);
x_5 = x_56;
x_7 = x_53;
goto _start;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_ctor_get(x_6, 0);
x_63 = lean_ctor_get(x_6, 1);
x_64 = lean_ctor_get(x_6, 2);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_6);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_54);
lean_ctor_set(x_65, 1, x_18);
x_66 = lean_array_push(x_64, x_65);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_62);
lean_ctor_set(x_67, 1, x_63);
lean_ctor_set(x_67, 2, x_66);
x_5 = x_56;
x_6 = x_67;
x_7 = x_53;
goto _start;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_47);
if (x_69 == 0)
{
return x_47;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_47, 0);
x_71 = lean_ctor_get(x_47, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_47);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_24);
if (x_73 == 0)
{
return x_24;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_24, 0);
x_75 = lean_ctor_get(x_24, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_24);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_20);
if (x_77 == 0)
{
return x_20;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_20, 0);
x_79 = lean_ctor_get(x_20, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_20);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_9__lambdaTelescopeAux___main___at_Lean_Meta_inferTypeAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
switch (lean_obj_tag(x_5)) {
case 6:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_ctor_get_uint8(x_5, sizeof(void*)*3);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_5, 2);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_array_get_size(x_3);
lean_inc(x_3);
x_24 = lean_expr_instantiate_rev_range(x_21, x_4, x_23, x_3);
lean_dec(x_23);
lean_dec(x_21);
x_25 = l_Lean_Meta_mkFreshId___rarg(x_7);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_26);
x_28 = lean_local_ctx_mk_local_decl(x_2, x_26, x_19, x_24, x_20);
x_29 = lean_expr_mk_fvar(x_26);
x_30 = lean_array_push(x_3, x_29);
x_2 = x_28;
x_3 = x_30;
x_5 = x_22;
x_7 = x_27;
goto _start;
}
case 8:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_32 = lean_ctor_get(x_5, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_5, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_5, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_5, 3);
lean_inc(x_35);
lean_dec(x_5);
x_36 = lean_array_get_size(x_3);
lean_inc(x_3);
x_37 = lean_expr_instantiate_rev_range(x_33, x_4, x_36, x_3);
lean_dec(x_33);
lean_inc(x_3);
x_38 = lean_expr_instantiate_rev_range(x_34, x_4, x_36, x_3);
lean_dec(x_36);
lean_dec(x_34);
x_39 = l_Lean_Meta_mkFreshId___rarg(x_7);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_40);
x_42 = lean_local_ctx_mk_let_decl(x_2, x_40, x_32, x_37, x_38);
x_43 = lean_expr_mk_fvar(x_40);
x_44 = lean_array_push(x_3, x_43);
x_2 = x_42;
x_3 = x_44;
x_5 = x_35;
x_7 = x_41;
goto _start;
}
default: 
{
lean_object* x_46; 
x_46 = lean_box(0);
x_8 = x_46;
goto block_18;
}
}
block_18:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_dec(x_8);
x_9 = lean_array_get_size(x_3);
lean_inc(x_3);
x_10 = lean_expr_instantiate_rev_range(x_5, x_4, x_9, x_3);
lean_dec(x_9);
lean_dec(x_5);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_6, 1);
lean_dec(x_12);
lean_ctor_set(x_6, 1, x_2);
lean_inc(x_3);
x_13 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12(x_1, x_3, x_10, x_3, x_4, x_6, x_7);
lean_dec(x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_15);
lean_inc(x_3);
x_17 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12(x_1, x_3, x_10, x_3, x_4, x_16, x_7);
lean_dec(x_3);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_inferTypeAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = l_Array_empty___closed__1;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l___private_Init_Lean_Meta_Basic_9__lambdaTelescopeAux___main___at_Lean_Meta_inferTypeAux___spec__4(x_1, x_6, x_7, x_8, x_2, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 2);
lean_dec(x_13);
lean_ctor_set(x_11, 2, x_5);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_ctor_get(x_11, 3);
x_17 = lean_ctor_get(x_11, 4);
x_18 = lean_ctor_get(x_11, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_11);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_5);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_9, 1, x_19);
return x_9;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_9, 1);
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_20, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_20, 5);
lean_inc(x_26);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 x_27 = x_20;
} else {
 lean_dec_ref(x_20);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(0, 6, 0);
} else {
 x_28 = x_27;
}
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_23);
lean_ctor_set(x_28, 2, x_5);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_25);
lean_ctor_set(x_28, 5, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_9);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_9, 1);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 2);
lean_dec(x_33);
lean_ctor_set(x_31, 2, x_5);
return x_9;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 1);
x_36 = lean_ctor_get(x_31, 3);
x_37 = lean_ctor_get(x_31, 4);
x_38 = lean_ctor_get(x_31, 5);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_31);
x_39 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_39, 0, x_34);
lean_ctor_set(x_39, 1, x_35);
lean_ctor_set(x_39, 2, x_5);
lean_ctor_set(x_39, 3, x_36);
lean_ctor_set(x_39, 4, x_37);
lean_ctor_set(x_39, 5, x_38);
lean_ctor_set(x_9, 1, x_39);
return x_9;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_40 = lean_ctor_get(x_9, 1);
x_41 = lean_ctor_get(x_9, 0);
lean_inc(x_40);
lean_inc(x_41);
lean_dec(x_9);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 4);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 5);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 lean_ctor_release(x_40, 4);
 lean_ctor_release(x_40, 5);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 6, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_43);
lean_ctor_set(x_48, 2, x_5);
lean_ctor_set(x_48, 3, x_44);
lean_ctor_set(x_48, 4, x_45);
lean_ctor_set(x_48, 5, x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_7__inferLambdaType___at_Lean_Meta_inferTypeAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_inferTypeAux___spec__3(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_22 = lean_nat_sub(x_4, x_12);
x_23 = lean_nat_sub(x_22, x_11);
lean_dec(x_22);
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_26 = x_6;
} else {
 lean_dec_ref(x_6);
 x_26 = lean_box(0);
}
if (lean_obj_tag(x_25) == 7)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_26);
lean_dec(x_23);
x_89 = lean_ctor_get(x_25, 2);
lean_inc(x_89);
lean_dec(x_25);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_24);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_8);
x_13 = x_91;
goto block_21;
}
else
{
lean_object* x_92; 
x_92 = lean_box(0);
x_27 = x_92;
goto block_88;
}
block_21:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_5 = x_12;
x_6 = x_14;
x_8 = x_15;
goto _start;
}
else
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
block_88:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_27);
lean_inc(x_3);
x_28 = lean_expr_instantiate_rev_range(x_25, x_24, x_23, x_3);
lean_dec(x_24);
lean_dec(x_25);
x_29 = lean_ctor_get(x_7, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_7, 2);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 1;
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 4, x_33);
lean_inc(x_30);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_34, 2, x_31);
lean_inc(x_1);
x_35 = lean_apply_3(x_1, x_28, x_34, x_8);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 7)
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_36, 2);
lean_inc(x_39);
lean_dec(x_36);
if (lean_is_scalar(x_26)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_26;
}
lean_ctor_set(x_40, 0, x_23);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_35, 0, x_40);
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_ctor_get(x_36, 2);
lean_inc(x_42);
lean_dec(x_36);
if (lean_is_scalar(x_26)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_26;
}
lean_ctor_set(x_43, 0, x_23);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
x_13 = x_44;
goto block_21;
}
}
else
{
uint8_t x_45; 
lean_dec(x_36);
lean_dec(x_26);
lean_dec(x_23);
x_45 = !lean_is_exclusive(x_35);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_35, 1);
x_47 = lean_ctor_get(x_35, 0);
lean_dec(x_47);
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set(x_50, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_51 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_3);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set_tag(x_35, 1);
lean_ctor_set(x_35, 0, x_51);
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_35, 1);
lean_inc(x_52);
lean_dec(x_35);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_56 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_56, 0, x_2);
lean_ctor_set(x_56, 1, x_3);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
x_13 = x_57;
goto block_21;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_23);
x_58 = !lean_is_exclusive(x_35);
if (x_58 == 0)
{
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_35, 0);
x_60 = lean_ctor_get(x_35, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_35);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_13 = x_61;
goto block_21;
}
}
}
else
{
lean_object* x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_29, 0);
x_63 = lean_ctor_get_uint8(x_29, sizeof(void*)*1);
x_64 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 1);
x_65 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 2);
x_66 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 3);
lean_inc(x_62);
lean_dec(x_29);
x_67 = 1;
x_68 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set_uint8(x_68, sizeof(void*)*1, x_63);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 1, x_64);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 2, x_65);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 3, x_66);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 4, x_67);
lean_inc(x_30);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_30);
lean_ctor_set(x_69, 2, x_31);
lean_inc(x_1);
x_70 = lean_apply_3(x_1, x_28, x_69, x_8);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
if (lean_obj_tag(x_71) == 7)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_30);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = lean_ctor_get(x_71, 2);
lean_inc(x_74);
lean_dec(x_71);
if (lean_is_scalar(x_26)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_26;
}
lean_ctor_set(x_75, 0, x_23);
lean_ctor_set(x_75, 1, x_74);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
x_13 = x_76;
goto block_21;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_71);
lean_dec(x_26);
lean_dec(x_23);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_82 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_82, 0, x_2);
lean_ctor_set(x_82, 1, x_3);
lean_ctor_set(x_82, 2, x_81);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_78;
 lean_ctor_set_tag(x_83, 1);
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_77);
x_13 = x_83;
goto block_21;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_23);
x_84 = lean_ctor_get(x_70, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_70, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_86 = x_70;
} else {
 lean_dec_ref(x_70);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
x_13 = x_87;
goto block_21;
}
}
}
}
else
{
lean_object* x_93; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_6);
lean_ctor_set(x_93, 1, x_8);
return x_93;
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_array_get_size(x_3);
lean_inc(x_8);
lean_inc(x_3);
x_9 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15(x_1, x_2, x_3, x_8, x_8, x_7, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_expr_instantiate_rev_range(x_13, x_12, x_8, x_3);
lean_dec(x_8);
lean_dec(x_12);
lean_dec(x_13);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_expr_instantiate_rev_range(x_18, x_17, x_8, x_3);
lean_dec(x_8);
lean_dec(x_17);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_2__inferAppType___at_Lean_Meta_inferTypeAux___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_1);
x_6 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__14(x_1, x_7, x_3, x_4, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 4, x_12);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_10);
x_14 = lean_apply_3(x_1, x_7, x_13, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 2:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_17);
x_18 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_17, x_3, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_9);
lean_dec(x_2);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_Lean_Meta_mkFreshId___rarg(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_level_mk_mvar(x_23);
lean_inc(x_25);
x_26 = lean_expr_mk_sort(x_25);
x_27 = l_Lean_Meta_assignExprMVar(x_17, x_26, x_3, x_24);
lean_dec(x_3);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_25);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_17);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_18, 1);
x_38 = lean_ctor_get(x_18, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_9);
x_42 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 0, x_42);
return x_18;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_18, 1);
lean_inc(x_43);
lean_dec(x_18);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_9);
x_47 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_18);
if (x_49 == 0)
{
return x_18;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_18, 0);
x_51 = lean_ctor_get(x_18, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_18);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
case 3:
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_14);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_14, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_15, 0);
lean_inc(x_55);
lean_dec(x_15);
lean_ctor_set(x_14, 0, x_55);
return x_14;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_14, 1);
lean_inc(x_56);
lean_dec(x_14);
x_57 = lean_ctor_get(x_15, 0);
lean_inc(x_57);
lean_dec(x_15);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
default: 
{
uint8_t x_59; 
lean_dec(x_15);
lean_dec(x_3);
x_59 = !lean_is_exclusive(x_14);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_14, 1);
x_61 = lean_ctor_get(x_14, 0);
lean_dec(x_61);
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
x_64 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_9);
x_65 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_65, 0, x_2);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_65);
return x_14;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_14, 1);
lean_inc(x_66);
lean_dec(x_14);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_9);
x_70 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_70, 0, x_2);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_66);
return x_71;
}
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_14);
if (x_72 == 0)
{
return x_14;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_14, 0);
x_74 = lean_ctor_get(x_14, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_14);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
lean_object* x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_76 = lean_ctor_get(x_6, 0);
x_77 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_78 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_79 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_80 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
lean_inc(x_76);
lean_dec(x_6);
x_81 = 1;
x_82 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set_uint8(x_82, sizeof(void*)*1, x_77);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 1, x_78);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 2, x_79);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 3, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 4, x_81);
lean_inc(x_9);
x_83 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_9);
lean_ctor_set(x_83, 2, x_10);
x_84 = lean_apply_3(x_1, x_7, x_83, x_8);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
switch (lean_obj_tag(x_85)) {
case 2:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_87);
x_88 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_87, x_3, x_86);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_unbox(x_89);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_9);
lean_dec(x_2);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
x_92 = l_Lean_Meta_mkFreshId___rarg(x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_level_mk_mvar(x_93);
lean_inc(x_95);
x_96 = lean_expr_mk_sort(x_95);
x_97 = l_Lean_Meta_assignExprMVar(x_87, x_96, x_3, x_94);
lean_dec(x_3);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_99 = x_97;
} else {
 lean_dec_ref(x_97);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_95);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_95);
x_101 = lean_ctor_get(x_97, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_97, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_103 = x_97;
} else {
 lean_dec_ref(x_97);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_87);
lean_dec(x_3);
x_105 = lean_ctor_get(x_88, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_106 = x_88;
} else {
 lean_dec_ref(x_88);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_105, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
x_109 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_109, 2, x_9);
x_110 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_110, 0, x_2);
lean_ctor_set(x_110, 1, x_109);
if (lean_is_scalar(x_106)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_106;
 lean_ctor_set_tag(x_111, 1);
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_105);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_87);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_112 = lean_ctor_get(x_88, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_88, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_114 = x_88;
} else {
 lean_dec_ref(x_88);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
case 3:
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_ctor_get(x_84, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_117 = x_84;
} else {
 lean_dec_ref(x_84);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get(x_85, 0);
lean_inc(x_118);
lean_dec(x_85);
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_117;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
return x_119;
}
default: 
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_85);
lean_dec(x_3);
x_120 = lean_ctor_get(x_84, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_121 = x_84;
} else {
 lean_dec_ref(x_84);
 x_121 = lean_box(0);
}
x_122 = lean_ctor_get(x_120, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
x_124 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_124, 2, x_9);
x_125 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_125, 0, x_2);
lean_ctor_set(x_125, 1, x_124);
if (lean_is_scalar(x_121)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_121;
 lean_ctor_set_tag(x_126, 1);
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_120);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_127 = lean_ctor_get(x_84, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_84, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_129 = x_84;
} else {
 lean_dec_ref(x_84);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_131 = !lean_is_exclusive(x_5);
if (x_131 == 0)
{
return x_5;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_5, 0);
x_133 = lean_ctor_get(x_5, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_5);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 4, x_12);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_10);
x_14 = lean_apply_3(x_1, x_7, x_13, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 2:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_17);
x_18 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_17, x_3, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_9);
lean_dec(x_2);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_Lean_Meta_mkFreshId___rarg(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_level_mk_mvar(x_23);
lean_inc(x_25);
x_26 = lean_expr_mk_sort(x_25);
x_27 = l_Lean_Meta_assignExprMVar(x_17, x_26, x_3, x_24);
lean_dec(x_3);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_25);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_17);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_18, 1);
x_38 = lean_ctor_get(x_18, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_9);
x_42 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 0, x_42);
return x_18;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_18, 1);
lean_inc(x_43);
lean_dec(x_18);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_9);
x_47 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_18);
if (x_49 == 0)
{
return x_18;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_18, 0);
x_51 = lean_ctor_get(x_18, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_18);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
case 3:
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_14);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_14, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_15, 0);
lean_inc(x_55);
lean_dec(x_15);
lean_ctor_set(x_14, 0, x_55);
return x_14;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_14, 1);
lean_inc(x_56);
lean_dec(x_14);
x_57 = lean_ctor_get(x_15, 0);
lean_inc(x_57);
lean_dec(x_15);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
default: 
{
uint8_t x_59; 
lean_dec(x_15);
lean_dec(x_3);
x_59 = !lean_is_exclusive(x_14);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_14, 1);
x_61 = lean_ctor_get(x_14, 0);
lean_dec(x_61);
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
x_64 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_9);
x_65 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_65, 0, x_2);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_65);
return x_14;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_14, 1);
lean_inc(x_66);
lean_dec(x_14);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_9);
x_70 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_70, 0, x_2);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_66);
return x_71;
}
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_14);
if (x_72 == 0)
{
return x_14;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_14, 0);
x_74 = lean_ctor_get(x_14, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_14);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
lean_object* x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_76 = lean_ctor_get(x_6, 0);
x_77 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_78 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_79 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_80 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
lean_inc(x_76);
lean_dec(x_6);
x_81 = 1;
x_82 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set_uint8(x_82, sizeof(void*)*1, x_77);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 1, x_78);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 2, x_79);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 3, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*1 + 4, x_81);
lean_inc(x_9);
x_83 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_9);
lean_ctor_set(x_83, 2, x_10);
x_84 = lean_apply_3(x_1, x_7, x_83, x_8);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
switch (lean_obj_tag(x_85)) {
case 2:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_87);
x_88 = l_Lean_Meta_isReadOnlyOrSyntheticExprMVar(x_87, x_3, x_86);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_unbox(x_89);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_9);
lean_dec(x_2);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
x_92 = l_Lean_Meta_mkFreshId___rarg(x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_level_mk_mvar(x_93);
lean_inc(x_95);
x_96 = lean_expr_mk_sort(x_95);
x_97 = l_Lean_Meta_assignExprMVar(x_87, x_96, x_3, x_94);
lean_dec(x_3);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_99 = x_97;
} else {
 lean_dec_ref(x_97);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_95);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_95);
x_101 = lean_ctor_get(x_97, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_97, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_103 = x_97;
} else {
 lean_dec_ref(x_97);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_87);
lean_dec(x_3);
x_105 = lean_ctor_get(x_88, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_106 = x_88;
} else {
 lean_dec_ref(x_88);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_105, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
x_109 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_109, 2, x_9);
x_110 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_110, 0, x_2);
lean_ctor_set(x_110, 1, x_109);
if (lean_is_scalar(x_106)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_106;
 lean_ctor_set_tag(x_111, 1);
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_105);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_87);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_112 = lean_ctor_get(x_88, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_88, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_114 = x_88;
} else {
 lean_dec_ref(x_88);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
case 3:
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_ctor_get(x_84, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_117 = x_84;
} else {
 lean_dec_ref(x_84);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get(x_85, 0);
lean_inc(x_118);
lean_dec(x_85);
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_117;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
return x_119;
}
default: 
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_85);
lean_dec(x_3);
x_120 = lean_ctor_get(x_84, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_121 = x_84;
} else {
 lean_dec_ref(x_84);
 x_121 = lean_box(0);
}
x_122 = lean_ctor_get(x_120, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
x_124 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_124, 2, x_9);
x_125 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_125, 0, x_2);
lean_ctor_set(x_125, 1, x_124);
if (lean_is_scalar(x_121)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_121;
 lean_ctor_set_tag(x_126, 1);
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_120);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_127 = lean_ctor_get(x_84, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_84, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_129 = x_84;
} else {
 lean_dec_ref(x_84);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_131 = !lean_is_exclusive(x_5);
if (x_131 == 0)
{
return x_5;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_5, 0);
x_133 = lean_ctor_get(x_5, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_5);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_4, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_4, x_11);
lean_dec(x_4);
x_13 = lean_array_fget(x_3, x_12);
lean_inc(x_7);
lean_inc(x_1);
x_14 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_13, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_7);
lean_inc(x_1);
x_17 = l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__18(x_1, x_15, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_level_mk_imax(x_18, x_6);
x_4 = x_12;
x_5 = lean_box(0);
x_6 = x_20;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_6);
lean_ctor_set(x_30, 1, x_8);
return x_30;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_is_class(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_array_fget(x_3, x_4);
x_20 = l_Lean_Expr_fvarId_x21(x_19);
lean_inc(x_5);
x_21 = l_Lean_Meta_getLocalDecl(x_20, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_24);
x_25 = l_Lean_Meta_isClassQuick___main(x_24, x_5, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_19);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_6 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_5);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_5, 2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_19);
x_38 = lean_array_push(x_36, x_37);
lean_ctor_set(x_5, 2, x_38);
x_4 = x_34;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = lean_ctor_get(x_5, 1);
x_42 = lean_ctor_get(x_5, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_19);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
x_4 = x_34;
x_5 = x_45;
x_6 = x_31;
goto _start;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_25, 1);
lean_inc(x_47);
lean_dec(x_25);
lean_inc(x_5);
lean_inc(x_1);
x_48 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_24, x_5, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_19);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_4, x_51);
lean_dec(x_4);
x_4 = x_52;
x_6 = x_50;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_4, x_56);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_5, 2);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_19);
x_61 = lean_array_push(x_59, x_60);
lean_ctor_set(x_5, 2, x_61);
x_4 = x_57;
x_6 = x_54;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_5, 0);
x_64 = lean_ctor_get(x_5, 1);
x_65 = lean_ctor_get(x_5, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_5);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_array_push(x_65, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_67);
x_4 = x_57;
x_5 = x_68;
x_6 = x_54;
goto _start;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_48);
if (x_70 == 0)
{
return x_48;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_48, 0);
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_48);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_25);
if (x_74 == 0)
{
return x_25;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_25, 0);
x_76 = lean_ctor_get(x_25, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_25);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_21);
if (x_78 == 0)
{
return x_21;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_21, 0);
x_80 = lean_ctor_get(x_21, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_21);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Expr_isForall(x_8);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_12) == 4)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_inc(x_13);
x_15 = lean_is_class(x_14, x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_10);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_10);
return x_21;
}
}
else
{
lean_object* x_22; 
x_22 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_9);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_usingDefault), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_9);
x_15 = lean_box(x_2);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_9);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1___boxed), 10, 7);
lean_closure_set(x_16, 0, x_9);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_15);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_5);
lean_closure_set(x_16, 6, x_8);
x_17 = lean_array_get_size(x_10);
x_18 = lean_nat_dec_lt(x_11, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = l_ReaderT_bind___at_Lean_Meta_forallTelescope___spec__3___rarg(x_14, x_16, x_12, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_14);
x_20 = lean_array_fget(x_10, x_11);
x_21 = l_Lean_Expr_fvarId_x21(x_20);
lean_inc(x_12);
x_22 = l_Lean_Meta_getLocalDecl(x_21, x_12, x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_LocalDecl_type(x_23);
lean_dec(x_23);
lean_inc(x_25);
x_26 = l_Lean_Meta_isClassQuick___main(x_25, x_12, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_20);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_11, x_29);
lean_dec(x_11);
x_11 = x_30;
x_13 = x_28;
goto _start;
}
case 1:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_11, x_34);
lean_dec(x_11);
x_36 = !lean_is_exclusive(x_12);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_12, 2);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_20);
x_39 = lean_array_push(x_37, x_38);
lean_ctor_set(x_12, 2, x_39);
x_11 = x_35;
x_13 = x_32;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_12, 0);
x_42 = lean_ctor_get(x_12, 1);
x_43 = lean_ctor_get(x_12, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_12);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_20);
x_45 = lean_array_push(x_43, x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_45);
x_11 = x_35;
x_12 = x_46;
x_13 = x_32;
goto _start;
}
}
default: 
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_1);
x_49 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_25, x_12, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_20);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_11, x_52);
lean_dec(x_11);
x_11 = x_53;
x_13 = x_51;
goto _start;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_ctor_get(x_50, 0);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_11, x_57);
lean_dec(x_11);
x_59 = !lean_is_exclusive(x_12);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_12, 2);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_20);
x_62 = lean_array_push(x_60, x_61);
lean_ctor_set(x_12, 2, x_62);
x_11 = x_58;
x_13 = x_55;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_12, 0);
x_65 = lean_ctor_get(x_12, 1);
x_66 = lean_ctor_get(x_12, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_12);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_56);
lean_ctor_set(x_67, 1, x_20);
x_68 = lean_array_push(x_66, x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_65);
lean_ctor_set(x_69, 2, x_68);
x_11 = x_58;
x_12 = x_69;
x_13 = x_55;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_49);
if (x_71 == 0)
{
return x_49;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_49, 0);
x_73 = lean_ctor_get(x_49, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_49);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_25);
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_26);
if (x_75 == 0)
{
return x_26;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_26, 0);
x_77 = lean_ctor_get(x_26, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_26);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_22);
if (x_79 == 0)
{
return x_22;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_22, 0);
x_81 = lean_ctor_get(x_22, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_22);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_nat_dec_lt(x_4, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_is_class(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_array_fget(x_3, x_4);
x_20 = l_Lean_Expr_fvarId_x21(x_19);
lean_inc(x_5);
x_21 = l_Lean_Meta_getLocalDecl(x_20, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_24);
x_25 = l_Lean_Meta_isClassQuick___main(x_24, x_5, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_19);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_4 = x_29;
x_6 = x_27;
goto _start;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_24);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_5);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_5, 2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_19);
x_38 = lean_array_push(x_36, x_37);
lean_ctor_set(x_5, 2, x_38);
x_4 = x_34;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_5, 0);
x_41 = lean_ctor_get(x_5, 1);
x_42 = lean_ctor_get(x_5, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_19);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
x_4 = x_34;
x_5 = x_45;
x_6 = x_31;
goto _start;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_25, 1);
lean_inc(x_47);
lean_dec(x_25);
lean_inc(x_5);
lean_inc(x_1);
x_48 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_24, x_5, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_19);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_4, x_51);
lean_dec(x_4);
x_4 = x_52;
x_6 = x_50;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_4, x_56);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_5, 2);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_19);
x_61 = lean_array_push(x_59, x_60);
lean_ctor_set(x_5, 2, x_61);
x_4 = x_57;
x_6 = x_54;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_5, 0);
x_64 = lean_ctor_get(x_5, 1);
x_65 = lean_ctor_get(x_5, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_5);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_array_push(x_65, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_67);
x_4 = x_57;
x_5 = x_68;
x_6 = x_54;
goto _start;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_48);
if (x_70 == 0)
{
return x_48;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_48, 0);
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_48);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_25);
if (x_74 == 0)
{
return x_25;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_25, 0);
x_76 = lean_ctor_get(x_25, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_25);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_21);
if (x_78 == 0)
{
return x_21;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_21, 0);
x_80 = lean_ctor_get(x_21, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_21);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
if (lean_obj_tag(x_7) == 7)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_7, 2);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_array_get_size(x_5);
lean_inc(x_5);
x_28 = lean_expr_instantiate_rev_range(x_25, x_6, x_27, x_5);
lean_dec(x_27);
lean_dec(x_25);
x_29 = l_Lean_Meta_mkFreshId___rarg(x_9);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_30);
x_32 = lean_local_ctx_mk_local_decl(x_4, x_30, x_23, x_28, x_24);
x_33 = lean_expr_mk_fvar(x_30);
x_34 = lean_array_push(x_5, x_33);
if (lean_obj_tag(x_3) == 0)
{
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc(x_36);
x_37 = lean_array_get_size(x_34);
x_38 = lean_nat_dec_lt(x_37, x_36);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_3);
lean_inc(x_34);
x_39 = lean_expr_instantiate_rev_range(x_26, x_6, x_37, x_34);
lean_dec(x_37);
lean_dec(x_26);
x_40 = !lean_is_exclusive(x_8);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_8, 1);
lean_dec(x_41);
lean_ctor_set(x_8, 1, x_32);
x_42 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26(x_1, x_39, x_34, x_6, x_8, x_31);
lean_dec(x_34);
lean_dec(x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_32);
lean_ctor_set(x_45, 2, x_44);
x_46 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26(x_1, x_39, x_34, x_6, x_45, x_31);
lean_dec(x_34);
lean_dec(x_39);
return x_46;
}
}
else
{
lean_dec(x_37);
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
}
}
else
{
lean_object* x_48; 
x_48 = lean_box(0);
x_10 = x_48;
goto block_22;
}
block_22:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_11 = lean_array_get_size(x_5);
lean_inc(x_5);
x_12 = lean_expr_instantiate_rev_range(x_7, x_6, x_11, x_5);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_inc(x_4);
lean_ctor_set(x_8, 1, x_4);
if (x_2 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24(x_1, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_5);
lean_dec(x_12);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
lean_inc(x_4);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_4);
lean_ctor_set(x_19, 2, x_18);
if (x_2 == 0)
{
lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_20 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24(x_1, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_5);
lean_dec(x_12);
return x_20;
}
else
{
lean_object* x_21; 
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_21;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 1;
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 4, x_10);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_inc(x_1);
lean_inc(x_2);
x_12 = lean_apply_3(x_1, x_2, x_11, x_5);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = l_Lean_Expr_isForall(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_inc(x_18);
x_20 = lean_is_class(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
x_21 = lean_box(0);
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
else
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
}
else
{
lean_object* x_23; 
lean_dec(x_17);
x_23 = lean_box(0);
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
}
else
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_12);
lean_dec(x_2);
x_24 = lean_ctor_get(x_15, 2);
lean_inc(x_24);
x_25 = 1;
x_26 = l_Array_empty___closed__1;
x_27 = lean_unsigned_to_nat(0u);
x_28 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(x_1, x_25, x_3, x_7, x_26, x_27, x_14, x_4, x_15);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_28, 1);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 2);
lean_dec(x_32);
lean_ctor_set(x_30, 2, x_24);
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 1);
x_35 = lean_ctor_get(x_30, 3);
x_36 = lean_ctor_get(x_30, 4);
x_37 = lean_ctor_get(x_30, 5);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_30);
x_38 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_35);
lean_ctor_set(x_38, 4, x_36);
lean_ctor_set(x_38, 5, x_37);
lean_ctor_set(x_28, 1, x_38);
return x_28;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_28, 1);
x_40 = lean_ctor_get(x_28, 0);
lean_inc(x_39);
lean_inc(x_40);
lean_dec(x_28);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_39, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_39, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_39, 5);
lean_inc(x_45);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 lean_ctor_release(x_39, 3);
 lean_ctor_release(x_39, 4);
 lean_ctor_release(x_39, 5);
 x_46 = x_39;
} else {
 lean_dec_ref(x_39);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 6, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_42);
lean_ctor_set(x_47, 2, x_24);
lean_ctor_set(x_47, 3, x_43);
lean_ctor_set(x_47, 4, x_44);
lean_ctor_set(x_47, 5, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_40);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_28);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_28, 1);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 2);
lean_dec(x_52);
lean_ctor_set(x_50, 2, x_24);
return x_28;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_50, 0);
x_54 = lean_ctor_get(x_50, 1);
x_55 = lean_ctor_get(x_50, 3);
x_56 = lean_ctor_get(x_50, 4);
x_57 = lean_ctor_get(x_50, 5);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_50);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_24);
lean_ctor_set(x_58, 3, x_55);
lean_ctor_set(x_58, 4, x_56);
lean_ctor_set(x_58, 5, x_57);
lean_ctor_set(x_28, 1, x_58);
return x_28;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_59 = lean_ctor_get(x_28, 1);
x_60 = lean_ctor_get(x_28, 0);
lean_inc(x_59);
lean_inc(x_60);
lean_dec(x_28);
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 3);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 4);
lean_inc(x_64);
x_65 = lean_ctor_get(x_59, 5);
lean_inc(x_65);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 lean_ctor_release(x_59, 2);
 lean_ctor_release(x_59, 3);
 lean_ctor_release(x_59, 4);
 lean_ctor_release(x_59, 5);
 x_66 = x_59;
} else {
 lean_dec_ref(x_59);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 6, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_62);
lean_ctor_set(x_67, 2, x_24);
lean_ctor_set(x_67, 3, x_63);
lean_ctor_set(x_67, 4, x_64);
lean_ctor_set(x_67, 5, x_65);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_69 = lean_ctor_get(x_12, 0);
x_70 = lean_ctor_get(x_12, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_12);
x_71 = l_Lean_Expr_isForall(x_69);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_69);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_72 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_72) == 4)
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
lean_inc(x_73);
x_75 = lean_is_class(x_74, x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_73);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_70);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_73);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_70);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_72);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_70);
return x_81;
}
}
else
{
lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_2);
x_82 = lean_ctor_get(x_70, 2);
lean_inc(x_82);
x_83 = 1;
x_84 = l_Array_empty___closed__1;
x_85 = lean_unsigned_to_nat(0u);
x_86 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(x_1, x_83, x_3, x_7, x_84, x_85, x_69, x_4, x_70);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
 x_89 = lean_box(0);
}
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
x_92 = lean_ctor_get(x_87, 3);
lean_inc(x_92);
x_93 = lean_ctor_get(x_87, 4);
lean_inc(x_93);
x_94 = lean_ctor_get(x_87, 5);
lean_inc(x_94);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 lean_ctor_release(x_87, 2);
 lean_ctor_release(x_87, 3);
 lean_ctor_release(x_87, 4);
 lean_ctor_release(x_87, 5);
 x_95 = x_87;
} else {
 lean_dec_ref(x_87);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 6, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_91);
lean_ctor_set(x_96, 2, x_82);
lean_ctor_set(x_96, 3, x_92);
lean_ctor_set(x_96, 4, x_93);
lean_ctor_set(x_96, 5, x_94);
if (lean_is_scalar(x_89)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_89;
}
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_98 = lean_ctor_get(x_86, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_86, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_100 = x_86;
} else {
 lean_dec_ref(x_86);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_98, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_98, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_98, 4);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 5);
lean_inc(x_105);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 lean_ctor_release(x_98, 2);
 lean_ctor_release(x_98, 3);
 lean_ctor_release(x_98, 4);
 lean_ctor_release(x_98, 5);
 x_106 = x_98;
} else {
 lean_dec_ref(x_98);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(0, 6, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_101);
lean_ctor_set(x_107, 1, x_102);
lean_ctor_set(x_107, 2, x_82);
lean_ctor_set(x_107, 3, x_103);
lean_ctor_set(x_107, 4, x_104);
lean_ctor_set(x_107, 5, x_105);
if (lean_is_scalar(x_100)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_100;
}
lean_ctor_set(x_108, 0, x_99);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_12);
if (x_109 == 0)
{
return x_12;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_12, 0);
x_111 = lean_ctor_get(x_12, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_12);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
lean_object* x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_113 = lean_ctor_get(x_6, 0);
x_114 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_115 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_116 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 2);
x_117 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 3);
lean_inc(x_113);
lean_dec(x_6);
x_118 = 1;
x_119 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_119, 0, x_113);
lean_ctor_set_uint8(x_119, sizeof(void*)*1, x_114);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 1, x_115);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 2, x_116);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 3, x_117);
lean_ctor_set_uint8(x_119, sizeof(void*)*1 + 4, x_118);
lean_inc(x_7);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_7);
lean_ctor_set(x_120, 2, x_8);
lean_inc(x_1);
lean_inc(x_2);
x_121 = lean_apply_3(x_1, x_2, x_120, x_5);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = l_Lean_Expr_isForall(x_122);
if (x_125 == 0)
{
lean_object* x_126; 
lean_dec(x_122);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_126 = l_Lean_Expr_getAppFn___main(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_126) == 4)
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_ctor_get(x_123, 0);
lean_inc(x_128);
lean_inc(x_127);
x_129 = lean_is_class(x_128, x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
lean_dec(x_127);
x_130 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_124;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_123);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_132, 0, x_127);
if (lean_is_scalar(x_124)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_124;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_123);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_126);
x_134 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_124;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_123);
return x_135;
}
}
else
{
lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_124);
lean_dec(x_2);
x_136 = lean_ctor_get(x_123, 2);
lean_inc(x_136);
x_137 = 1;
x_138 = l_Array_empty___closed__1;
x_139 = lean_unsigned_to_nat(0u);
x_140 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(x_1, x_137, x_3, x_7, x_138, x_139, x_122, x_4, x_123);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 0);
lean_inc(x_142);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_143 = x_140;
} else {
 lean_dec_ref(x_140);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_141, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_141, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_141, 3);
lean_inc(x_146);
x_147 = lean_ctor_get(x_141, 4);
lean_inc(x_147);
x_148 = lean_ctor_get(x_141, 5);
lean_inc(x_148);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 lean_ctor_release(x_141, 2);
 lean_ctor_release(x_141, 3);
 lean_ctor_release(x_141, 4);
 lean_ctor_release(x_141, 5);
 x_149 = x_141;
} else {
 lean_dec_ref(x_141);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(0, 6, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_144);
lean_ctor_set(x_150, 1, x_145);
lean_ctor_set(x_150, 2, x_136);
lean_ctor_set(x_150, 3, x_146);
lean_ctor_set(x_150, 4, x_147);
lean_ctor_set(x_150, 5, x_148);
if (lean_is_scalar(x_143)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_143;
}
lean_ctor_set(x_151, 0, x_142);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_152 = lean_ctor_get(x_140, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_140, 0);
lean_inc(x_153);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_154 = x_140;
} else {
 lean_dec_ref(x_140);
 x_154 = lean_box(0);
}
x_155 = lean_ctor_get(x_152, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_152, 1);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 3);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 4);
lean_inc(x_158);
x_159 = lean_ctor_get(x_152, 5);
lean_inc(x_159);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 lean_ctor_release(x_152, 5);
 x_160 = x_152;
} else {
 lean_dec_ref(x_152);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(0, 6, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_155);
lean_ctor_set(x_161, 1, x_156);
lean_ctor_set(x_161, 2, x_136);
lean_ctor_set(x_161, 3, x_157);
lean_ctor_set(x_161, 4, x_158);
lean_ctor_set(x_161, 5, x_159);
if (lean_is_scalar(x_154)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_154;
}
lean_ctor_set(x_162, 0, x_153);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_163 = lean_ctor_get(x_121, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_121, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_165 = x_121;
} else {
 lean_dec_ref(x_121);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
}
}
lean_object* l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_box(0);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
x_9 = 2;
lean_ctor_set_uint8(x_7, sizeof(void*)*1 + 4, x_9);
x_10 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__22(x_1, x_2, x_5, x_3, x_4);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_13 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_14 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 2);
x_15 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 3);
lean_inc(x_11);
lean_dec(x_7);
x_16 = 2;
x_17 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_12);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 1, x_13);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 2, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 3, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 4, x_16);
lean_ctor_set(x_3, 0, x_17);
x_18 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__22(x_1, x_2, x_5, x_3, x_4);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get_uint8(x_19, sizeof(void*)*1);
x_24 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 1);
x_25 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 2);
x_26 = lean_ctor_get_uint8(x_19, sizeof(void*)*1 + 3);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 x_27 = x_19;
} else {
 lean_dec_ref(x_19);
 x_27 = lean_box(0);
}
x_28 = 2;
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 1, 5);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 1, x_24);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 2, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 3, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 4, x_28);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_20);
lean_ctor_set(x_30, 2, x_21);
x_31 = l___private_Init_Lean_Meta_Basic_8__forallTelescopeReducingAux___at_Lean_Meta_inferTypeAux___spec__22(x_1, x_2, x_5, x_30, x_4);
return x_31;
}
}
}
lean_object* l_Lean_Meta_isClassExpensive___at_Lean_Meta_inferTypeAux___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_5);
x_10 = lean_nat_dec_lt(x_6, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_6);
lean_inc(x_7);
lean_inc(x_1);
x_11 = l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__17(x_1, x_4, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(x_1, x_2, x_2, x_3, lean_box(0), x_12, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Lean_Level_normalize___main(x_16);
lean_dec(x_16);
x_18 = lean_expr_mk_sort(x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = l_Lean_Level_normalize___main(x_19);
lean_dec(x_19);
x_22 = lean_expr_mk_sort(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_11);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_array_fget(x_5, x_6);
x_33 = l_Lean_Expr_fvarId_x21(x_32);
lean_inc(x_7);
x_34 = l_Lean_Meta_getLocalDecl(x_33, x_7, x_8);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_LocalDecl_type(x_35);
lean_dec(x_35);
lean_inc(x_37);
x_38 = l_Lean_Meta_isClassQuick___main(x_37, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
switch (lean_obj_tag(x_39)) {
case 0:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_37);
lean_dec(x_32);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_6, x_41);
lean_dec(x_6);
x_6 = x_42;
x_8 = x_40;
goto _start;
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_37);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = lean_ctor_get(x_39, 0);
lean_inc(x_45);
lean_dec(x_39);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_6, x_46);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_7);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_7, 2);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_32);
x_51 = lean_array_push(x_49, x_50);
lean_ctor_set(x_7, 2, x_51);
x_6 = x_47;
x_8 = x_44;
goto _start;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_7, 0);
x_54 = lean_ctor_get(x_7, 1);
x_55 = lean_ctor_get(x_7, 2);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_7);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_45);
lean_ctor_set(x_56, 1, x_32);
x_57 = lean_array_push(x_55, x_56);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_57);
x_6 = x_47;
x_7 = x_58;
x_8 = x_44;
goto _start;
}
}
default: 
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_38, 1);
lean_inc(x_60);
lean_dec(x_38);
lean_inc(x_7);
lean_inc(x_1);
x_61 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_37, x_7, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_32);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_6, x_64);
lean_dec(x_6);
x_6 = x_65;
x_8 = x_63;
goto _start;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_6, x_69);
lean_dec(x_6);
x_71 = !lean_is_exclusive(x_7);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_7, 2);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_32);
x_74 = lean_array_push(x_72, x_73);
lean_ctor_set(x_7, 2, x_74);
x_6 = x_70;
x_8 = x_67;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get(x_7, 0);
x_77 = lean_ctor_get(x_7, 1);
x_78 = lean_ctor_get(x_7, 2);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_7);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_68);
lean_ctor_set(x_79, 1, x_32);
x_80 = lean_array_push(x_78, x_79);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_77);
lean_ctor_set(x_81, 2, x_80);
x_6 = x_70;
x_7 = x_81;
x_8 = x_67;
goto _start;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_61);
if (x_83 == 0)
{
return x_61;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_61, 0);
x_85 = lean_ctor_get(x_61, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_61);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_38);
if (x_87 == 0)
{
return x_38;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_38, 0);
x_89 = lean_ctor_get(x_38, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_38);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_34);
if (x_91 == 0)
{
return x_34;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_34, 0);
x_93 = lean_ctor_get(x_34, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_34);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Expr_isForall(x_8);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_inc(x_9);
lean_inc(x_1);
x_12 = l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__17(x_1, x_2, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(x_1, x_3, x_3, x_4, lean_box(0), x_13, x_9, x_14);
lean_dec(x_3);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Lean_Level_normalize___main(x_17);
lean_dec(x_17);
x_19 = lean_expr_mk_sort(x_18);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = l_Lean_Level_normalize___main(x_20);
lean_dec(x_20);
x_23 = lean_expr_mk_sort(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_12);
if (x_29 == 0)
{
return x_12;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; 
lean_dec(x_2);
x_33 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27(x_1, x_5, x_6, x_7, x_3, x_4, x_8, x_9, x_10);
return x_33;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_9);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_usingDefault), 4, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_9);
x_15 = lean_box(x_2);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_9);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1___boxed), 10, 7);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_9);
lean_closure_set(x_16, 2, x_5);
lean_closure_set(x_16, 3, x_8);
lean_closure_set(x_16, 4, x_15);
lean_closure_set(x_16, 5, x_3);
lean_closure_set(x_16, 6, x_4);
x_17 = lean_array_get_size(x_10);
x_18 = lean_nat_dec_lt(x_11, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = l_ReaderT_bind___at_Lean_Meta_forallTelescope___spec__3___rarg(x_14, x_16, x_12, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_14);
x_20 = lean_array_fget(x_10, x_11);
x_21 = l_Lean_Expr_fvarId_x21(x_20);
lean_inc(x_12);
x_22 = l_Lean_Meta_getLocalDecl(x_21, x_12, x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_LocalDecl_type(x_23);
lean_dec(x_23);
lean_inc(x_25);
x_26 = l_Lean_Meta_isClassQuick___main(x_25, x_12, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_20);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_11, x_29);
lean_dec(x_11);
x_11 = x_30;
x_13 = x_28;
goto _start;
}
case 1:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_11, x_34);
lean_dec(x_11);
x_36 = !lean_is_exclusive(x_12);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_12, 2);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_20);
x_39 = lean_array_push(x_37, x_38);
lean_ctor_set(x_12, 2, x_39);
x_11 = x_35;
x_13 = x_32;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_12, 0);
x_42 = lean_ctor_get(x_12, 1);
x_43 = lean_ctor_get(x_12, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_12);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_20);
x_45 = lean_array_push(x_43, x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_45);
x_11 = x_35;
x_12 = x_46;
x_13 = x_32;
goto _start;
}
}
default: 
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_1);
x_49 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_25, x_12, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_20);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_11, x_52);
lean_dec(x_11);
x_11 = x_53;
x_13 = x_51;
goto _start;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_dec(x_49);
x_56 = lean_ctor_get(x_50, 0);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_11, x_57);
lean_dec(x_11);
x_59 = !lean_is_exclusive(x_12);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_12, 2);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_20);
x_62 = lean_array_push(x_60, x_61);
lean_ctor_set(x_12, 2, x_62);
x_11 = x_58;
x_13 = x_55;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_12, 0);
x_65 = lean_ctor_get(x_12, 1);
x_66 = lean_ctor_get(x_12, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_12);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_56);
lean_ctor_set(x_67, 1, x_20);
x_68 = lean_array_push(x_66, x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_65);
lean_ctor_set(x_69, 2, x_68);
x_11 = x_58;
x_12 = x_69;
x_13 = x_55;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_49);
if (x_71 == 0)
{
return x_49;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_49, 0);
x_73 = lean_ctor_get(x_49, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_49);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_25);
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_26);
if (x_75 == 0)
{
return x_26;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_26, 0);
x_77 = lean_ctor_get(x_26, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_26);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_22);
if (x_79 == 0)
{
return x_22;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_22, 0);
x_81 = lean_ctor_get(x_22, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_22);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_5);
x_10 = lean_nat_dec_lt(x_6, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_6);
lean_inc(x_7);
lean_inc(x_1);
x_11 = l___private_Init_Lean_Meta_InferType_5__getLevel___at_Lean_Meta_inferTypeAux___spec__17(x_1, x_4, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(x_1, x_2, x_2, x_3, lean_box(0), x_12, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Lean_Level_normalize___main(x_16);
lean_dec(x_16);
x_18 = lean_expr_mk_sort(x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = l_Lean_Level_normalize___main(x_19);
lean_dec(x_19);
x_22 = lean_expr_mk_sort(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_11);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_array_fget(x_5, x_6);
x_33 = l_Lean_Expr_fvarId_x21(x_32);
lean_inc(x_7);
x_34 = l_Lean_Meta_getLocalDecl(x_33, x_7, x_8);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_LocalDecl_type(x_35);
lean_dec(x_35);
lean_inc(x_37);
x_38 = l_Lean_Meta_isClassQuick___main(x_37, x_7, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
switch (lean_obj_tag(x_39)) {
case 0:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_37);
lean_dec(x_32);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_6, x_41);
lean_dec(x_6);
x_6 = x_42;
x_8 = x_40;
goto _start;
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_37);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = lean_ctor_get(x_39, 0);
lean_inc(x_45);
lean_dec(x_39);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_6, x_46);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_7);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_7, 2);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_32);
x_51 = lean_array_push(x_49, x_50);
lean_ctor_set(x_7, 2, x_51);
x_6 = x_47;
x_8 = x_44;
goto _start;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_7, 0);
x_54 = lean_ctor_get(x_7, 1);
x_55 = lean_ctor_get(x_7, 2);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_7);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_45);
lean_ctor_set(x_56, 1, x_32);
x_57 = lean_array_push(x_55, x_56);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_57);
x_6 = x_47;
x_7 = x_58;
x_8 = x_44;
goto _start;
}
}
default: 
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_38, 1);
lean_inc(x_60);
lean_dec(x_38);
lean_inc(x_7);
lean_inc(x_1);
x_61 = l_Lean_Meta_isClassExpensive___main___at_Lean_Meta_inferTypeAux___spec__21(x_1, x_37, x_7, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_32);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_6, x_64);
lean_dec(x_6);
x_6 = x_65;
x_8 = x_63;
goto _start;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_6, x_69);
lean_dec(x_6);
x_71 = !lean_is_exclusive(x_7);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_7, 2);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_32);
x_74 = lean_array_push(x_72, x_73);
lean_ctor_set(x_7, 2, x_74);
x_6 = x_70;
x_8 = x_67;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get(x_7, 0);
x_77 = lean_ctor_get(x_7, 1);
x_78 = lean_ctor_get(x_7, 2);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_7);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_68);
lean_ctor_set(x_79, 1, x_32);
x_80 = lean_array_push(x_78, x_79);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_77);
lean_ctor_set(x_81, 2, x_80);
x_6 = x_70;
x_7 = x_81;
x_8 = x_67;
goto _start;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_61);
if (x_83 == 0)
{
return x_61;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_61, 0);
x_85 = lean_ctor_get(x_61, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_61);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_38);
if (x_87 == 0)
{
return x_38;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_38, 0);
x_89 = lean_ctor_get(x_38, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_38);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_34);
if (x_91 == 0)
{
return x_34;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_34, 0);
x_93 = lean_ctor_get(x_34, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_34);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
if (lean_obj_tag(x_7) == 7)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_7, 2);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_array_get_size(x_5);
lean_inc(x_5);
x_28 = lean_expr_instantiate_rev_range(x_25, x_6, x_27, x_5);
lean_dec(x_27);
lean_dec(x_25);
x_29 = l_Lean_Meta_mkFreshId___rarg(x_9);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_30);
x_32 = lean_local_ctx_mk_local_decl(x_4, x_30, x_23, x_28, x_24);
x_33 = lean_expr_mk_fvar(x_30);
x_34 = lean_array_push(x_5, x_33);
if (lean_obj_tag(x_3) == 0)
{
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc(x_36);
x_37 = lean_array_get_size(x_34);
x_38 = lean_nat_dec_lt(x_37, x_36);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_3);
lean_inc(x_34);
x_39 = lean_expr_instantiate_rev_range(x_26, x_6, x_37, x_34);
lean_dec(x_26);
x_40 = !lean_is_exclusive(x_8);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_8, 1);
lean_dec(x_41);
lean_ctor_set(x_8, 1, x_32);
x_42 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30(x_1, x_34, x_37, x_39, x_34, x_6, x_8, x_31);
lean_dec(x_34);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_32);
lean_ctor_set(x_45, 2, x_44);
x_46 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30(x_1, x_34, x_37, x_39, x_34, x_6, x_45, x_31);
lean_dec(x_34);
return x_46;
}
}
else
{
lean_dec(x_37);
x_4 = x_32;
x_5 = x_34;
x_7 = x_26;
x_9 = x_31;
goto _start;
}
}
}
else
{
lean_object* x_48; 
x_48 = lean_box(0);
x_10 = x_48;
goto block_22;
}
block_22:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_11 = lean_array_get_size(x_5);
lean_inc(x_5);
x_12 = lean_expr_instantiate_rev_range(x_7, x_6, x_11, x_5);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_inc(x_4);
lean_ctor_set(x_8, 1, x_4);
if (x_2 == 0)
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28(x_1, x_5, x_11, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_5);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
lean_inc(x_4);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_4);
lean_ctor_set(x_19, 2, x_18);
if (x_2 == 0)
{
lean_object* x_20; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_20 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28(x_1, x_5, x_11, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_5);
return x_20;
}
else
{
lean_object* x_21; 
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_5, x_6, x_19, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_21;
}
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_6__inferForallType___at_Lean_Meta_inferTypeAux___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_box(0);
x_8 = 0;
x_9 = l_Array_empty___closed__1;
x_10 = lean_unsigned_to_nat(0u);
x_11 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27(x_1, x_8, x_7, x_6, x_9, x_10, x_2, x_3, x_4);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 2);
lean_dec(x_15);
lean_ctor_set(x_13, 2, x_5);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
x_18 = lean_ctor_get(x_13, 3);
x_19 = lean_ctor_get(x_13, 4);
x_20 = lean_ctor_get(x_13, 5);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_5);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set(x_21, 4, x_19);
lean_ctor_set(x_21, 5, x_20);
lean_ctor_set(x_11, 1, x_21);
return x_11;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_11, 1);
x_23 = lean_ctor_get(x_11, 0);
lean_inc(x_22);
lean_inc(x_23);
lean_dec(x_11);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_22, 4);
lean_inc(x_27);
x_28 = lean_ctor_get(x_22, 5);
lean_inc(x_28);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 lean_ctor_release(x_22, 2);
 lean_ctor_release(x_22, 3);
 lean_ctor_release(x_22, 4);
 lean_ctor_release(x_22, 5);
 x_29 = x_22;
} else {
 lean_dec_ref(x_22);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 6, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_5);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set(x_30, 4, x_27);
lean_ctor_set(x_30, 5, x_28);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_11, 1);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 2);
lean_dec(x_35);
lean_ctor_set(x_33, 2, x_5);
return x_11;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_ctor_get(x_33, 1);
x_38 = lean_ctor_get(x_33, 3);
x_39 = lean_ctor_get(x_33, 4);
x_40 = lean_ctor_get(x_33, 5);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_33);
x_41 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_37);
lean_ctor_set(x_41, 2, x_5);
lean_ctor_set(x_41, 3, x_38);
lean_ctor_set(x_41, 4, x_39);
lean_ctor_set(x_41, 5, x_40);
lean_ctor_set(x_11, 1, x_41);
return x_11;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_11, 1);
x_43 = lean_ctor_get(x_11, 0);
lean_inc(x_42);
lean_inc(x_43);
lean_dec(x_11);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_42, 3);
lean_inc(x_46);
x_47 = lean_ctor_get(x_42, 4);
lean_inc(x_47);
x_48 = lean_ctor_get(x_42, 5);
lean_inc(x_48);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 lean_ctor_release(x_42, 2);
 lean_ctor_release(x_42, 3);
 lean_ctor_release(x_42, 4);
 lean_ctor_release(x_42, 5);
 x_49 = x_42;
} else {
 lean_dec_ref(x_42);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 6, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_5);
lean_ctor_set(x_50, 3, x_46);
lean_ctor_set(x_50, 4, x_47);
lean_ctor_set(x_50, 5, x_48);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_43);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_22 = lean_nat_sub(x_4, x_12);
x_23 = lean_nat_sub(x_22, x_11);
lean_dec(x_22);
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_26 = x_6;
} else {
 lean_dec_ref(x_6);
 x_26 = lean_box(0);
}
if (lean_obj_tag(x_25) == 7)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_26);
lean_dec(x_23);
x_89 = lean_ctor_get(x_25, 2);
lean_inc(x_89);
lean_dec(x_25);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_24);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_8);
x_13 = x_91;
goto block_21;
}
else
{
lean_object* x_92; 
x_92 = lean_box(0);
x_27 = x_92;
goto block_88;
}
block_21:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_5 = x_12;
x_6 = x_14;
x_8 = x_15;
goto _start;
}
else
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
block_88:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_27);
lean_inc(x_3);
x_28 = lean_expr_instantiate_rev_range(x_25, x_24, x_23, x_3);
lean_dec(x_24);
lean_dec(x_25);
x_29 = lean_ctor_get(x_7, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_7, 2);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 1;
lean_ctor_set_uint8(x_29, sizeof(void*)*1 + 4, x_33);
lean_inc(x_30);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_34, 2, x_31);
lean_inc(x_1);
x_35 = lean_apply_3(x_1, x_28, x_34, x_8);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 7)
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_35, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_36, 2);
lean_inc(x_39);
lean_dec(x_36);
if (lean_is_scalar(x_26)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_26;
}
lean_ctor_set(x_40, 0, x_23);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_35, 0, x_40);
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_ctor_get(x_36, 2);
lean_inc(x_42);
lean_dec(x_36);
if (lean_is_scalar(x_26)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_26;
}
lean_ctor_set(x_43, 0, x_23);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
x_13 = x_44;
goto block_21;
}
}
else
{
uint8_t x_45; 
lean_dec(x_36);
lean_dec(x_26);
lean_dec(x_23);
x_45 = !lean_is_exclusive(x_35);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_35, 1);
x_47 = lean_ctor_get(x_35, 0);
lean_dec(x_47);
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set(x_50, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_51 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_3);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set_tag(x_35, 1);
lean_ctor_set(x_35, 0, x_51);
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_35, 1);
lean_inc(x_52);
lean_dec(x_35);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_56 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_56, 0, x_2);
lean_ctor_set(x_56, 1, x_3);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
x_13 = x_57;
goto block_21;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_23);
x_58 = !lean_is_exclusive(x_35);
if (x_58 == 0)
{
x_13 = x_35;
goto block_21;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_35, 0);
x_60 = lean_ctor_get(x_35, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_35);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_13 = x_61;
goto block_21;
}
}
}
else
{
lean_object* x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_29, 0);
x_63 = lean_ctor_get_uint8(x_29, sizeof(void*)*1);
x_64 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 1);
x_65 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 2);
x_66 = lean_ctor_get_uint8(x_29, sizeof(void*)*1 + 3);
lean_inc(x_62);
lean_dec(x_29);
x_67 = 1;
x_68 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set_uint8(x_68, sizeof(void*)*1, x_63);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 1, x_64);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 2, x_65);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 3, x_66);
lean_ctor_set_uint8(x_68, sizeof(void*)*1 + 4, x_67);
lean_inc(x_30);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_30);
lean_ctor_set(x_69, 2, x_31);
lean_inc(x_1);
x_70 = lean_apply_3(x_1, x_28, x_69, x_8);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
if (lean_obj_tag(x_71) == 7)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_30);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = lean_ctor_get(x_71, 2);
lean_inc(x_74);
lean_dec(x_71);
if (lean_is_scalar(x_26)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_26;
}
lean_ctor_set(x_75, 0, x_23);
lean_ctor_set(x_75, 1, x_74);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
x_13 = x_76;
goto block_21;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_71);
lean_dec(x_26);
lean_dec(x_23);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_82 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_82, 0, x_2);
lean_ctor_set(x_82, 1, x_3);
lean_ctor_set(x_82, 2, x_81);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_78;
 lean_ctor_set_tag(x_83, 1);
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_77);
x_13 = x_83;
goto block_21;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_23);
x_84 = lean_ctor_get(x_70, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_70, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_86 = x_70;
} else {
 lean_dec_ref(x_70);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
x_13 = x_87;
goto block_21;
}
}
}
}
else
{
lean_object* x_93; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_6);
lean_ctor_set(x_93, 1, x_8);
return x_93;
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_array_get_size(x_3);
lean_inc(x_8);
lean_inc(x_3);
x_9 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33(x_1, x_2, x_3, x_8, x_8, x_7, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_expr_instantiate_rev_range(x_13, x_12, x_8, x_3);
lean_dec(x_8);
lean_dec(x_12);
lean_dec(x_13);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_expr_instantiate_rev_range(x_18, x_17, x_8, x_3);
lean_dec(x_8);
lean_dec(x_17);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_6, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_6, x_12);
lean_dec(x_6);
x_14 = lean_nat_sub(x_5, x_13);
x_15 = lean_nat_sub(x_14, x_12);
lean_dec(x_14);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_8, 2);
lean_inc(x_18);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_20 = 1;
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 4, x_20);
lean_inc(x_17);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_18);
lean_inc(x_1);
x_22 = lean_apply_3(x_1, x_7, x_21, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 7)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_17);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 2);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Expr_hasLooseBVars(x_25);
if (x_26 == 0)
{
lean_dec(x_15);
x_6 = x_13;
x_7 = x_25;
x_9 = x_24;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_inc(x_4);
lean_inc(x_2);
x_28 = lean_expr_mk_proj(x_2, x_15, x_4);
x_29 = lean_expr_instantiate1(x_25, x_28);
lean_dec(x_28);
lean_dec(x_25);
x_6 = x_13;
x_7 = x_29;
x_9 = x_24;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_dec(x_23);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_22);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_22, 1);
x_33 = lean_ctor_get(x_22, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_36, 2, x_17);
x_37 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_3);
lean_ctor_set(x_37, 2, x_4);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_37);
return x_22;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_22, 1);
lean_inc(x_38);
lean_dec(x_22);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_17);
x_42 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_3);
lean_ctor_set(x_42, 2, x_4);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_38);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_22);
if (x_44 == 0)
{
return x_22;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_22, 0);
x_46 = lean_ctor_get(x_22, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_22);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_16, 0);
x_49 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_50 = lean_ctor_get_uint8(x_16, sizeof(void*)*1 + 1);
x_51 = lean_ctor_get_uint8(x_16, sizeof(void*)*1 + 2);
x_52 = lean_ctor_get_uint8(x_16, sizeof(void*)*1 + 3);
lean_inc(x_48);
lean_dec(x_16);
x_53 = 1;
x_54 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_49);
lean_ctor_set_uint8(x_54, sizeof(void*)*1 + 1, x_50);
lean_ctor_set_uint8(x_54, sizeof(void*)*1 + 2, x_51);
lean_ctor_set_uint8(x_54, sizeof(void*)*1 + 3, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1 + 4, x_53);
lean_inc(x_17);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_17);
lean_ctor_set(x_55, 2, x_18);
lean_inc(x_1);
x_56 = lean_apply_3(x_1, x_7, x_55, x_9);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 7)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_17);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_57, 2);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Expr_hasLooseBVars(x_59);
if (x_60 == 0)
{
lean_dec(x_15);
x_6 = x_13;
x_7 = x_59;
x_9 = x_58;
goto _start;
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_inc(x_4);
lean_inc(x_2);
x_62 = lean_expr_mk_proj(x_2, x_15, x_4);
x_63 = lean_expr_instantiate1(x_59, x_62);
lean_dec(x_62);
lean_dec(x_59);
x_6 = x_13;
x_7 = x_63;
x_9 = x_58;
goto _start;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_57);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_1);
x_65 = lean_ctor_get(x_56, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_66 = x_56;
} else {
 lean_dec_ref(x_56);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_17);
x_70 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_70, 0, x_2);
lean_ctor_set(x_70, 1, x_3);
lean_ctor_set(x_70, 2, x_4);
lean_ctor_set(x_70, 3, x_69);
if (lean_is_scalar(x_66)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_66;
 lean_ctor_set_tag(x_71, 1);
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_65);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = lean_ctor_get(x_56, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_56, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_74 = x_56;
} else {
 lean_dec_ref(x_56);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_7);
lean_ctor_set(x_76, 1, x_9);
return x_76;
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_4__inferProjType___at_Lean_Meta_inferTypeAux___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_7 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 2);
lean_inc(x_12);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = 1;
lean_ctor_set_uint8(x_8, sizeof(void*)*1 + 4, x_14);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_12);
lean_inc(x_1);
lean_inc(x_15);
x_16 = lean_apply_3(x_1, x_9, x_15, x_10);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 1);
x_19 = lean_ctor_get(x_16, 0);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = l_Lean_Expr_getAppFn___main(x_19);
if (lean_obj_tag(x_22) == 4)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_20);
x_25 = lean_environment_find(x_20, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_11);
x_27 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_3);
lean_ctor_set(x_27, 2, x_4);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_27);
return x_16;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
if (lean_obj_tag(x_28) == 5)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_20);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_11);
x_32 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_4);
lean_ctor_set(x_32, 3, x_31);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_32);
return x_16;
}
else
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_dec(x_29);
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
lean_dec(x_30);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux___main(x_19, x_36);
x_38 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
x_42 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_19, x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = lean_nat_dec_eq(x_34, x_43);
lean_dec(x_43);
lean_dec(x_34);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_42);
lean_dec(x_35);
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_20);
lean_ctor_set(x_45, 1, x_21);
lean_ctor_set(x_45, 2, x_11);
x_46 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_46, 0, x_2);
lean_ctor_set(x_46, 1, x_3);
lean_ctor_set(x_46, 2, x_4);
lean_ctor_set(x_46, 3, x_45);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_46);
return x_16;
}
else
{
lean_object* x_47; 
lean_inc(x_20);
x_47 = lean_environment_find(x_20, x_35);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_20);
lean_ctor_set(x_48, 1, x_21);
lean_ctor_set(x_48, 2, x_11);
x_49 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_49, 0, x_2);
lean_ctor_set(x_49, 1, x_3);
lean_ctor_set(x_49, 2, x_4);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_49);
return x_16;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_21);
lean_dec(x_20);
lean_free_object(x_16);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_instantiate_type_lparams(x_50, x_24);
lean_inc(x_5);
lean_inc(x_1);
x_52 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__32(x_1, x_51, x_42, x_5, x_18);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_4);
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_55 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(x_1, x_2, x_3, x_4, x_3, x_3, x_53, x_5, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_apply_3(x_1, x_56, x_15, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 7)
{
uint8_t x_60; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_58, 0);
lean_dec(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
lean_ctor_set(x_58, 0, x_62);
return x_58;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_58, 1);
lean_inc(x_63);
lean_dec(x_58);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_dec(x_59);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_59);
x_66 = !lean_is_exclusive(x_58);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_58, 1);
x_68 = lean_ctor_get(x_58, 0);
lean_dec(x_68);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_71, 2, x_11);
x_72 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_72, 0, x_2);
lean_ctor_set(x_72, 1, x_3);
lean_ctor_set(x_72, 2, x_4);
lean_ctor_set(x_72, 3, x_71);
lean_ctor_set_tag(x_58, 1);
lean_ctor_set(x_58, 0, x_72);
return x_58;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_58, 1);
lean_inc(x_73);
lean_dec(x_58);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_11);
x_77 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_77, 0, x_2);
lean_ctor_set(x_77, 1, x_3);
lean_ctor_set(x_77, 2, x_4);
lean_ctor_set(x_77, 3, x_76);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_73);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = !lean_is_exclusive(x_58);
if (x_79 == 0)
{
return x_58;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_58, 0);
x_81 = lean_ctor_get(x_58, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_58);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_55);
if (x_83 == 0)
{
return x_55;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_55, 0);
x_85 = lean_ctor_get(x_55, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_55);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_52);
if (x_87 == 0)
{
return x_52;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_52, 0);
x_89 = lean_ctor_get(x_52, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_52);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
else
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_33);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_20);
lean_ctor_set(x_91, 1, x_21);
lean_ctor_set(x_91, 2, x_11);
x_92 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_92, 0, x_2);
lean_ctor_set(x_92, 1, x_3);
lean_ctor_set(x_92, 2, x_4);
lean_ctor_set(x_92, 3, x_91);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_92);
return x_16;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; 
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_20);
lean_ctor_set(x_93, 1, x_21);
lean_ctor_set(x_93, 2, x_11);
x_94 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_94, 0, x_2);
lean_ctor_set(x_94, 1, x_3);
lean_ctor_set(x_94, 2, x_4);
lean_ctor_set(x_94, 3, x_93);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_94);
return x_16;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_20);
lean_ctor_set(x_95, 1, x_21);
lean_ctor_set(x_95, 2, x_11);
x_96 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_96, 0, x_2);
lean_ctor_set(x_96, 1, x_3);
lean_ctor_set(x_96, 2, x_4);
lean_ctor_set(x_96, 3, x_95);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_96);
return x_16;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_16, 1);
x_98 = lean_ctor_get(x_16, 0);
lean_inc(x_97);
lean_inc(x_98);
lean_dec(x_16);
x_99 = lean_ctor_get(x_97, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
x_101 = l_Lean_Expr_getAppFn___main(x_98);
if (lean_obj_tag(x_101) == 4)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
lean_inc(x_99);
x_104 = lean_environment_find(x_99, x_102);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_103);
lean_dec(x_98);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_105 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_105, 0, x_99);
lean_ctor_set(x_105, 1, x_100);
lean_ctor_set(x_105, 2, x_11);
x_106 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_106, 0, x_2);
lean_ctor_set(x_106, 1, x_3);
lean_ctor_set(x_106, 2, x_4);
lean_ctor_set(x_106, 3, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_97);
return x_107;
}
else
{
lean_object* x_108; 
x_108 = lean_ctor_get(x_104, 0);
lean_inc(x_108);
lean_dec(x_104);
if (lean_obj_tag(x_108) == 5)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
lean_dec(x_108);
x_110 = lean_ctor_get(x_109, 4);
lean_inc(x_110);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_109);
lean_dec(x_103);
lean_dec(x_98);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_111 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_111, 0, x_99);
lean_ctor_set(x_111, 1, x_100);
lean_ctor_set(x_111, 2, x_11);
x_112 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_112, 0, x_2);
lean_ctor_set(x_112, 1, x_3);
lean_ctor_set(x_112, 2, x_4);
lean_ctor_set(x_112, 3, x_111);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_97);
return x_113;
}
else
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_115 = lean_ctor_get(x_109, 1);
lean_inc(x_115);
lean_dec(x_109);
x_116 = lean_ctor_get(x_110, 0);
lean_inc(x_116);
lean_dec(x_110);
x_117 = lean_unsigned_to_nat(0u);
x_118 = l_Lean_Expr_getAppNumArgsAux___main(x_98, x_117);
x_119 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_118);
x_120 = lean_mk_array(x_118, x_119);
x_121 = lean_unsigned_to_nat(1u);
x_122 = lean_nat_sub(x_118, x_121);
lean_dec(x_118);
x_123 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_98, x_120, x_122);
x_124 = lean_array_get_size(x_123);
x_125 = lean_nat_dec_eq(x_115, x_124);
lean_dec(x_124);
lean_dec(x_115);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_123);
lean_dec(x_116);
lean_dec(x_103);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_126 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_126, 0, x_99);
lean_ctor_set(x_126, 1, x_100);
lean_ctor_set(x_126, 2, x_11);
x_127 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_127, 0, x_2);
lean_ctor_set(x_127, 1, x_3);
lean_ctor_set(x_127, 2, x_4);
lean_ctor_set(x_127, 3, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_97);
return x_128;
}
else
{
lean_object* x_129; 
lean_inc(x_99);
x_129 = lean_environment_find(x_99, x_116);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_123);
lean_dec(x_103);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_130 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_130, 0, x_99);
lean_ctor_set(x_130, 1, x_100);
lean_ctor_set(x_130, 2, x_11);
x_131 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_131, 0, x_2);
lean_ctor_set(x_131, 1, x_3);
lean_ctor_set(x_131, 2, x_4);
lean_ctor_set(x_131, 3, x_130);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_97);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_100);
lean_dec(x_99);
x_133 = lean_ctor_get(x_129, 0);
lean_inc(x_133);
lean_dec(x_129);
x_134 = lean_instantiate_type_lparams(x_133, x_103);
lean_inc(x_5);
lean_inc(x_1);
x_135 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__32(x_1, x_134, x_123, x_5, x_97);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
lean_inc(x_4);
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_138 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(x_1, x_2, x_3, x_4, x_3, x_3, x_136, x_5, x_137);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_apply_3(x_1, x_139, x_15, x_140);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
if (lean_obj_tag(x_142) == 7)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_dec(x_142);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_144;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_143);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_142);
x_147 = lean_ctor_get(x_141, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_148 = x_141;
} else {
 lean_dec_ref(x_141);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
x_151 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
lean_ctor_set(x_151, 2, x_11);
x_152 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_152, 0, x_2);
lean_ctor_set(x_152, 1, x_3);
lean_ctor_set(x_152, 2, x_4);
lean_ctor_set(x_152, 3, x_151);
if (lean_is_scalar(x_148)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_148;
 lean_ctor_set_tag(x_153, 1);
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_147);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_154 = lean_ctor_get(x_141, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_141, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_156 = x_141;
} else {
 lean_dec_ref(x_141);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_158 = lean_ctor_get(x_138, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_138, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_160 = x_138;
} else {
 lean_dec_ref(x_138);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = lean_ctor_get(x_135, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_135, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_164 = x_135;
} else {
 lean_dec_ref(x_135);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_114);
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_103);
lean_dec(x_98);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_99);
lean_ctor_set(x_166, 1, x_100);
lean_ctor_set(x_166, 2, x_11);
x_167 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_167, 0, x_2);
lean_ctor_set(x_167, 1, x_3);
lean_ctor_set(x_167, 2, x_4);
lean_ctor_set(x_167, 3, x_166);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_97);
return x_168;
}
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_108);
lean_dec(x_103);
lean_dec(x_98);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_169 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_169, 0, x_99);
lean_ctor_set(x_169, 1, x_100);
lean_ctor_set(x_169, 2, x_11);
x_170 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_170, 0, x_2);
lean_ctor_set(x_170, 1, x_3);
lean_ctor_set(x_170, 2, x_4);
lean_ctor_set(x_170, 3, x_169);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_97);
return x_171;
}
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_101);
lean_dec(x_98);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_172 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_172, 0, x_99);
lean_ctor_set(x_172, 1, x_100);
lean_ctor_set(x_172, 2, x_11);
x_173 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_173, 0, x_2);
lean_ctor_set(x_173, 1, x_3);
lean_ctor_set(x_173, 2, x_4);
lean_ctor_set(x_173, 3, x_172);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_97);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_175 = !lean_is_exclusive(x_16);
if (x_175 == 0)
{
return x_16;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_16, 0);
x_177 = lean_ctor_get(x_16, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_16);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
lean_object* x_179; uint8_t x_180; uint8_t x_181; uint8_t x_182; uint8_t x_183; uint8_t x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_179 = lean_ctor_get(x_8, 0);
x_180 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_181 = lean_ctor_get_uint8(x_8, sizeof(void*)*1 + 1);
x_182 = lean_ctor_get_uint8(x_8, sizeof(void*)*1 + 2);
x_183 = lean_ctor_get_uint8(x_8, sizeof(void*)*1 + 3);
lean_inc(x_179);
lean_dec(x_8);
x_184 = 1;
x_185 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_185, 0, x_179);
lean_ctor_set_uint8(x_185, sizeof(void*)*1, x_180);
lean_ctor_set_uint8(x_185, sizeof(void*)*1 + 1, x_181);
lean_ctor_set_uint8(x_185, sizeof(void*)*1 + 2, x_182);
lean_ctor_set_uint8(x_185, sizeof(void*)*1 + 3, x_183);
lean_ctor_set_uint8(x_185, sizeof(void*)*1 + 4, x_184);
lean_inc(x_11);
x_186 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_11);
lean_ctor_set(x_186, 2, x_12);
lean_inc(x_1);
lean_inc(x_186);
x_187 = lean_apply_3(x_1, x_9, x_186, x_10);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = lean_ctor_get(x_188, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_188, 1);
lean_inc(x_192);
x_193 = l_Lean_Expr_getAppFn___main(x_189);
if (lean_obj_tag(x_193) == 4)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
lean_inc(x_191);
x_196 = lean_environment_find(x_191, x_194);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_195);
lean_dec(x_189);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_197 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_197, 0, x_191);
lean_ctor_set(x_197, 1, x_192);
lean_ctor_set(x_197, 2, x_11);
x_198 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_198, 0, x_2);
lean_ctor_set(x_198, 1, x_3);
lean_ctor_set(x_198, 2, x_4);
lean_ctor_set(x_198, 3, x_197);
if (lean_is_scalar(x_190)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_190;
 lean_ctor_set_tag(x_199, 1);
}
lean_ctor_set(x_199, 0, x_198);
lean_ctor_set(x_199, 1, x_188);
return x_199;
}
else
{
lean_object* x_200; 
x_200 = lean_ctor_get(x_196, 0);
lean_inc(x_200);
lean_dec(x_196);
if (lean_obj_tag(x_200) == 5)
{
lean_object* x_201; lean_object* x_202; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_ctor_get(x_201, 4);
lean_inc(x_202);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_201);
lean_dec(x_195);
lean_dec(x_189);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_203 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_203, 0, x_191);
lean_ctor_set(x_203, 1, x_192);
lean_ctor_set(x_203, 2, x_11);
x_204 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_204, 0, x_2);
lean_ctor_set(x_204, 1, x_3);
lean_ctor_set(x_204, 2, x_4);
lean_ctor_set(x_204, 3, x_203);
if (lean_is_scalar(x_190)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_190;
 lean_ctor_set_tag(x_205, 1);
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_188);
return x_205;
}
else
{
lean_object* x_206; 
x_206 = lean_ctor_get(x_202, 1);
lean_inc(x_206);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_207 = lean_ctor_get(x_201, 1);
lean_inc(x_207);
lean_dec(x_201);
x_208 = lean_ctor_get(x_202, 0);
lean_inc(x_208);
lean_dec(x_202);
x_209 = lean_unsigned_to_nat(0u);
x_210 = l_Lean_Expr_getAppNumArgsAux___main(x_189, x_209);
x_211 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_210);
x_212 = lean_mk_array(x_210, x_211);
x_213 = lean_unsigned_to_nat(1u);
x_214 = lean_nat_sub(x_210, x_213);
lean_dec(x_210);
x_215 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_189, x_212, x_214);
x_216 = lean_array_get_size(x_215);
x_217 = lean_nat_dec_eq(x_207, x_216);
lean_dec(x_216);
lean_dec(x_207);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_215);
lean_dec(x_208);
lean_dec(x_195);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_218 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_218, 0, x_191);
lean_ctor_set(x_218, 1, x_192);
lean_ctor_set(x_218, 2, x_11);
x_219 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_219, 0, x_2);
lean_ctor_set(x_219, 1, x_3);
lean_ctor_set(x_219, 2, x_4);
lean_ctor_set(x_219, 3, x_218);
if (lean_is_scalar(x_190)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_190;
 lean_ctor_set_tag(x_220, 1);
}
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_188);
return x_220;
}
else
{
lean_object* x_221; 
lean_inc(x_191);
x_221 = lean_environment_find(x_191, x_208);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_215);
lean_dec(x_195);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_222 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_222, 0, x_191);
lean_ctor_set(x_222, 1, x_192);
lean_ctor_set(x_222, 2, x_11);
x_223 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_223, 0, x_2);
lean_ctor_set(x_223, 1, x_3);
lean_ctor_set(x_223, 2, x_4);
lean_ctor_set(x_223, 3, x_222);
if (lean_is_scalar(x_190)) {
 x_224 = lean_alloc_ctor(1, 2, 0);
} else {
 x_224 = x_190;
 lean_ctor_set_tag(x_224, 1);
}
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_188);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_192);
lean_dec(x_191);
lean_dec(x_190);
x_225 = lean_ctor_get(x_221, 0);
lean_inc(x_225);
lean_dec(x_221);
x_226 = lean_instantiate_type_lparams(x_225, x_195);
lean_inc(x_5);
lean_inc(x_1);
x_227 = l___private_Init_Lean_Meta_InferType_1__getForallResultType___at_Lean_Meta_inferTypeAux___spec__32(x_1, x_226, x_215, x_5, x_188);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
lean_inc(x_4);
lean_inc_n(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_230 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(x_1, x_2, x_3, x_4, x_3, x_3, x_228, x_5, x_229);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = lean_apply_3(x_1, x_231, x_186, x_232);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
if (lean_obj_tag(x_234) == 7)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_236 = x_233;
} else {
 lean_dec_ref(x_233);
 x_236 = lean_box(0);
}
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_dec(x_234);
if (lean_is_scalar(x_236)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_236;
}
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_235);
return x_238;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_234);
x_239 = lean_ctor_get(x_233, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_240 = x_233;
} else {
 lean_dec_ref(x_233);
 x_240 = lean_box(0);
}
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
x_243 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
lean_ctor_set(x_243, 2, x_11);
x_244 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_244, 0, x_2);
lean_ctor_set(x_244, 1, x_3);
lean_ctor_set(x_244, 2, x_4);
lean_ctor_set(x_244, 3, x_243);
if (lean_is_scalar(x_240)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_240;
 lean_ctor_set_tag(x_245, 1);
}
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_239);
return x_245;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_246 = lean_ctor_get(x_233, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_233, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_248 = x_233;
} else {
 lean_dec_ref(x_233);
 x_248 = lean_box(0);
}
if (lean_is_scalar(x_248)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_248;
}
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_186);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_250 = lean_ctor_get(x_230, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_230, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_252 = x_230;
} else {
 lean_dec_ref(x_230);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_186);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_254 = lean_ctor_get(x_227, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_227, 1);
lean_inc(x_255);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_256 = x_227;
} else {
 lean_dec_ref(x_227);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(1, 2, 0);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_254);
lean_ctor_set(x_257, 1, x_255);
return x_257;
}
}
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_206);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_195);
lean_dec(x_189);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_258 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_258, 0, x_191);
lean_ctor_set(x_258, 1, x_192);
lean_ctor_set(x_258, 2, x_11);
x_259 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_259, 0, x_2);
lean_ctor_set(x_259, 1, x_3);
lean_ctor_set(x_259, 2, x_4);
lean_ctor_set(x_259, 3, x_258);
if (lean_is_scalar(x_190)) {
 x_260 = lean_alloc_ctor(1, 2, 0);
} else {
 x_260 = x_190;
 lean_ctor_set_tag(x_260, 1);
}
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_188);
return x_260;
}
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_200);
lean_dec(x_195);
lean_dec(x_189);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_261 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_261, 0, x_191);
lean_ctor_set(x_261, 1, x_192);
lean_ctor_set(x_261, 2, x_11);
x_262 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_262, 0, x_2);
lean_ctor_set(x_262, 1, x_3);
lean_ctor_set(x_262, 2, x_4);
lean_ctor_set(x_262, 3, x_261);
if (lean_is_scalar(x_190)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_190;
 lean_ctor_set_tag(x_263, 1);
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_188);
return x_263;
}
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_193);
lean_dec(x_189);
lean_dec(x_186);
lean_dec(x_5);
lean_dec(x_1);
x_264 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_264, 0, x_191);
lean_ctor_set(x_264, 1, x_192);
lean_ctor_set(x_264, 2, x_11);
x_265 = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(x_265, 0, x_2);
lean_ctor_set(x_265, 1, x_3);
lean_ctor_set(x_265, 2, x_4);
lean_ctor_set(x_265, 3, x_264);
if (lean_is_scalar(x_190)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_190;
 lean_ctor_set_tag(x_266, 1);
}
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_188);
return x_266;
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_186);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_267 = lean_ctor_get(x_187, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_187, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_269 = x_187;
} else {
 lean_dec_ref(x_187);
 x_269 = lean_box(0);
}
if (lean_is_scalar(x_269)) {
 x_270 = lean_alloc_ctor(1, 2, 0);
} else {
 x_270 = x_269;
}
lean_ctor_set(x_270, 0, x_267);
lean_ctor_set(x_270, 1, x_268);
return x_270;
}
}
}
else
{
uint8_t x_271; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_271 = !lean_is_exclusive(x_7);
if (x_271 == 0)
{
return x_7;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_272 = lean_ctor_get(x_7, 0);
x_273 = lean_ctor_get(x_7, 1);
lean_inc(x_273);
lean_inc(x_272);
lean_dec(x_7);
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
return x_274;
}
}
}
}
lean_object* l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_3);
lean_dec(x_1);
x_56 = lean_ctor_get(x_2, 0);
lean_inc(x_56);
lean_dec(x_2);
x_57 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_4);
return x_58;
}
case 1:
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_1);
x_59 = lean_ctor_get(x_2, 0);
lean_inc(x_59);
lean_dec(x_2);
x_60 = l___private_Init_Lean_Meta_InferType_10__inferFVarType(x_59, x_3, x_4);
return x_60;
}
case 2:
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_1);
x_61 = lean_ctor_get(x_2, 0);
lean_inc(x_61);
lean_dec(x_2);
x_62 = l___private_Init_Lean_Meta_InferType_9__inferMVarType(x_61, x_3, x_4);
lean_dec(x_3);
return x_62;
}
case 3:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_3);
lean_dec(x_1);
x_63 = lean_ctor_get(x_2, 0);
lean_inc(x_63);
lean_dec(x_2);
x_64 = lean_level_mk_succ(x_63);
x_65 = lean_expr_mk_sort(x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_4);
return x_66;
}
case 4:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_1);
x_67 = lean_ctor_get(x_2, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
lean_dec(x_2);
x_69 = l___private_Init_Lean_Meta_InferType_3__inferConstType(x_67, x_68, x_3, x_4);
lean_dec(x_3);
return x_69;
}
case 5:
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = l_Lean_Expr_getAppFn___main(x_70);
lean_dec(x_70);
x_72 = lean_unsigned_to_nat(0u);
x_73 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_72);
x_74 = l_Lean_Expr_inhabited___closed__1;
lean_inc(x_73);
x_75 = lean_mk_array(x_73, x_74);
x_76 = lean_unsigned_to_nat(1u);
x_77 = lean_nat_sub(x_73, x_76);
lean_dec(x_73);
lean_inc(x_2);
x_78 = l___private_Init_Lean_Expr_4__getAppArgsAux___main(x_2, x_75, x_77);
x_79 = lean_ctor_get(x_4, 2);
lean_inc(x_79);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_80, x_2);
lean_dec(x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; 
x_82 = l___private_Init_Lean_Meta_InferType_2__inferAppType___at_Lean_Meta_inferTypeAux___spec__13(x_1, x_71, x_78, x_3, x_4);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_83, 2);
lean_inc(x_84);
x_85 = !lean_is_exclusive(x_82);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = lean_ctor_get(x_82, 0);
x_87 = lean_ctor_get(x_82, 1);
lean_dec(x_87);
x_88 = !lean_is_exclusive(x_83);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_83, 2);
lean_dec(x_89);
x_90 = !lean_is_exclusive(x_84);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_84, 0);
lean_inc(x_86);
x_92 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_91, x_2, x_86);
lean_ctor_set(x_84, 0, x_92);
return x_82;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_84, 0);
x_94 = lean_ctor_get(x_84, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_84);
lean_inc(x_86);
x_95 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_93, x_2, x_86);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
lean_ctor_set(x_83, 2, x_96);
return x_82;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_97 = lean_ctor_get(x_83, 0);
x_98 = lean_ctor_get(x_83, 1);
x_99 = lean_ctor_get(x_83, 3);
x_100 = lean_ctor_get(x_83, 4);
x_101 = lean_ctor_get(x_83, 5);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_83);
x_102 = lean_ctor_get(x_84, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_84, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_104 = x_84;
} else {
 lean_dec_ref(x_84);
 x_104 = lean_box(0);
}
lean_inc(x_86);
x_105 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_102, x_2, x_86);
if (lean_is_scalar(x_104)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_104;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_103);
x_107 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_98);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_99);
lean_ctor_set(x_107, 4, x_100);
lean_ctor_set(x_107, 5, x_101);
lean_ctor_set(x_82, 1, x_107);
return x_82;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_108 = lean_ctor_get(x_82, 0);
lean_inc(x_108);
lean_dec(x_82);
x_109 = lean_ctor_get(x_83, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_83, 1);
lean_inc(x_110);
x_111 = lean_ctor_get(x_83, 3);
lean_inc(x_111);
x_112 = lean_ctor_get(x_83, 4);
lean_inc(x_112);
x_113 = lean_ctor_get(x_83, 5);
lean_inc(x_113);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 lean_ctor_release(x_83, 2);
 lean_ctor_release(x_83, 3);
 lean_ctor_release(x_83, 4);
 lean_ctor_release(x_83, 5);
 x_114 = x_83;
} else {
 lean_dec_ref(x_83);
 x_114 = lean_box(0);
}
x_115 = lean_ctor_get(x_84, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_84, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_117 = x_84;
} else {
 lean_dec_ref(x_84);
 x_117 = lean_box(0);
}
lean_inc(x_108);
x_118 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_115, x_2, x_108);
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_117;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
if (lean_is_scalar(x_114)) {
 x_120 = lean_alloc_ctor(0, 6, 0);
} else {
 x_120 = x_114;
}
lean_ctor_set(x_120, 0, x_109);
lean_ctor_set(x_120, 1, x_110);
lean_ctor_set(x_120, 2, x_119);
lean_ctor_set(x_120, 3, x_111);
lean_ctor_set(x_120, 4, x_112);
lean_ctor_set(x_120, 5, x_113);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_108);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
else
{
uint8_t x_122; 
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_82);
if (x_122 == 0)
{
return x_82;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_82, 0);
x_124 = lean_ctor_get(x_82, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_82);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_78);
lean_dec(x_71);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_126 = lean_ctor_get(x_81, 0);
lean_inc(x_126);
lean_dec(x_81);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_4);
return x_127;
}
}
case 7:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_4, 2);
lean_inc(x_128);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
lean_dec(x_128);
x_130 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_129, x_2);
lean_dec(x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; 
lean_inc(x_2);
x_131 = l___private_Init_Lean_Meta_InferType_6__inferForallType___at_Lean_Meta_inferTypeAux___spec__16(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_132, 2);
lean_inc(x_133);
x_134 = !lean_is_exclusive(x_131);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_135 = lean_ctor_get(x_131, 0);
x_136 = lean_ctor_get(x_131, 1);
lean_dec(x_136);
x_137 = !lean_is_exclusive(x_132);
if (x_137 == 0)
{
lean_object* x_138; uint8_t x_139; 
x_138 = lean_ctor_get(x_132, 2);
lean_dec(x_138);
x_139 = !lean_is_exclusive(x_133);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_133, 0);
lean_inc(x_135);
x_141 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_140, x_2, x_135);
lean_ctor_set(x_133, 0, x_141);
return x_131;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_133, 0);
x_143 = lean_ctor_get(x_133, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_133);
lean_inc(x_135);
x_144 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_142, x_2, x_135);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
lean_ctor_set(x_132, 2, x_145);
return x_131;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_146 = lean_ctor_get(x_132, 0);
x_147 = lean_ctor_get(x_132, 1);
x_148 = lean_ctor_get(x_132, 3);
x_149 = lean_ctor_get(x_132, 4);
x_150 = lean_ctor_get(x_132, 5);
lean_inc(x_150);
lean_inc(x_149);
lean_inc(x_148);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_132);
x_151 = lean_ctor_get(x_133, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_133, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_153 = x_133;
} else {
 lean_dec_ref(x_133);
 x_153 = lean_box(0);
}
lean_inc(x_135);
x_154 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_151, x_2, x_135);
if (lean_is_scalar(x_153)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_153;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_152);
x_156 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_156, 0, x_146);
lean_ctor_set(x_156, 1, x_147);
lean_ctor_set(x_156, 2, x_155);
lean_ctor_set(x_156, 3, x_148);
lean_ctor_set(x_156, 4, x_149);
lean_ctor_set(x_156, 5, x_150);
lean_ctor_set(x_131, 1, x_156);
return x_131;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_157 = lean_ctor_get(x_131, 0);
lean_inc(x_157);
lean_dec(x_131);
x_158 = lean_ctor_get(x_132, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_132, 1);
lean_inc(x_159);
x_160 = lean_ctor_get(x_132, 3);
lean_inc(x_160);
x_161 = lean_ctor_get(x_132, 4);
lean_inc(x_161);
x_162 = lean_ctor_get(x_132, 5);
lean_inc(x_162);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 lean_ctor_release(x_132, 2);
 lean_ctor_release(x_132, 3);
 lean_ctor_release(x_132, 4);
 lean_ctor_release(x_132, 5);
 x_163 = x_132;
} else {
 lean_dec_ref(x_132);
 x_163 = lean_box(0);
}
x_164 = lean_ctor_get(x_133, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_133, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_166 = x_133;
} else {
 lean_dec_ref(x_133);
 x_166 = lean_box(0);
}
lean_inc(x_157);
x_167 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_164, x_2, x_157);
if (lean_is_scalar(x_166)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_166;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_165);
if (lean_is_scalar(x_163)) {
 x_169 = lean_alloc_ctor(0, 6, 0);
} else {
 x_169 = x_163;
}
lean_ctor_set(x_169, 0, x_158);
lean_ctor_set(x_169, 1, x_159);
lean_ctor_set(x_169, 2, x_168);
lean_ctor_set(x_169, 3, x_160);
lean_ctor_set(x_169, 4, x_161);
lean_ctor_set(x_169, 5, x_162);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_157);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
else
{
uint8_t x_171; 
lean_dec(x_2);
x_171 = !lean_is_exclusive(x_131);
if (x_171 == 0)
{
return x_131;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_131, 0);
x_173 = lean_ctor_get(x_131, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_131);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_175 = lean_ctor_get(x_130, 0);
lean_inc(x_175);
lean_dec(x_130);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_4);
return x_176;
}
}
case 9:
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_3);
lean_dec(x_1);
x_177 = lean_ctor_get(x_2, 0);
lean_inc(x_177);
lean_dec(x_2);
x_178 = l_Lean_Literal_type(x_177);
lean_dec(x_177);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_4);
return x_179;
}
case 10:
{
lean_object* x_180; 
x_180 = lean_ctor_get(x_2, 1);
lean_inc(x_180);
lean_dec(x_2);
x_2 = x_180;
goto _start;
}
case 11:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_182 = lean_ctor_get(x_2, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_2, 1);
lean_inc(x_183);
x_184 = lean_ctor_get(x_2, 2);
lean_inc(x_184);
x_185 = lean_ctor_get(x_4, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
lean_dec(x_185);
x_187 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_186, x_2);
lean_dec(x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; 
x_188 = l___private_Init_Lean_Meta_InferType_4__inferProjType___at_Lean_Meta_inferTypeAux___spec__31(x_1, x_182, x_183, x_184, x_3, x_4);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_189 = lean_ctor_get(x_188, 1);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 2);
lean_inc(x_190);
x_191 = !lean_is_exclusive(x_188);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_192 = lean_ctor_get(x_188, 0);
x_193 = lean_ctor_get(x_188, 1);
lean_dec(x_193);
x_194 = !lean_is_exclusive(x_189);
if (x_194 == 0)
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_ctor_get(x_189, 2);
lean_dec(x_195);
x_196 = !lean_is_exclusive(x_190);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; 
x_197 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_198 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_197, x_2, x_192);
lean_ctor_set(x_190, 0, x_198);
return x_188;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_199 = lean_ctor_get(x_190, 0);
x_200 = lean_ctor_get(x_190, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_190);
lean_inc(x_192);
x_201 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_199, x_2, x_192);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
lean_ctor_set(x_189, 2, x_202);
return x_188;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_203 = lean_ctor_get(x_189, 0);
x_204 = lean_ctor_get(x_189, 1);
x_205 = lean_ctor_get(x_189, 3);
x_206 = lean_ctor_get(x_189, 4);
x_207 = lean_ctor_get(x_189, 5);
lean_inc(x_207);
lean_inc(x_206);
lean_inc(x_205);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_189);
x_208 = lean_ctor_get(x_190, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_190, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_210 = x_190;
} else {
 lean_dec_ref(x_190);
 x_210 = lean_box(0);
}
lean_inc(x_192);
x_211 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_208, x_2, x_192);
if (lean_is_scalar(x_210)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_210;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_209);
x_213 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_213, 0, x_203);
lean_ctor_set(x_213, 1, x_204);
lean_ctor_set(x_213, 2, x_212);
lean_ctor_set(x_213, 3, x_205);
lean_ctor_set(x_213, 4, x_206);
lean_ctor_set(x_213, 5, x_207);
lean_ctor_set(x_188, 1, x_213);
return x_188;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_214 = lean_ctor_get(x_188, 0);
lean_inc(x_214);
lean_dec(x_188);
x_215 = lean_ctor_get(x_189, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_189, 1);
lean_inc(x_216);
x_217 = lean_ctor_get(x_189, 3);
lean_inc(x_217);
x_218 = lean_ctor_get(x_189, 4);
lean_inc(x_218);
x_219 = lean_ctor_get(x_189, 5);
lean_inc(x_219);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 lean_ctor_release(x_189, 2);
 lean_ctor_release(x_189, 3);
 lean_ctor_release(x_189, 4);
 lean_ctor_release(x_189, 5);
 x_220 = x_189;
} else {
 lean_dec_ref(x_189);
 x_220 = lean_box(0);
}
x_221 = lean_ctor_get(x_190, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_190, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_223 = x_190;
} else {
 lean_dec_ref(x_190);
 x_223 = lean_box(0);
}
lean_inc(x_214);
x_224 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_221, x_2, x_214);
if (lean_is_scalar(x_223)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_223;
}
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_222);
if (lean_is_scalar(x_220)) {
 x_226 = lean_alloc_ctor(0, 6, 0);
} else {
 x_226 = x_220;
}
lean_ctor_set(x_226, 0, x_215);
lean_ctor_set(x_226, 1, x_216);
lean_ctor_set(x_226, 2, x_225);
lean_ctor_set(x_226, 3, x_217);
lean_ctor_set(x_226, 4, x_218);
lean_ctor_set(x_226, 5, x_219);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_214);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_2);
x_228 = !lean_is_exclusive(x_188);
if (x_228 == 0)
{
return x_188;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_188, 0);
x_230 = lean_ctor_get(x_188, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_188);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; lean_object* x_233; 
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_232 = lean_ctor_get(x_187, 0);
lean_inc(x_232);
lean_dec(x_187);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_4);
return x_233;
}
}
default: 
{
lean_object* x_234; 
x_234 = lean_box(0);
x_5 = x_234;
goto block_55;
}
}
block_55:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_PersistentHashMap_find___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__1(x_7, x_2);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_inc(x_2);
x_9 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_inferTypeAux___spec__3(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_10, 2);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_19 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_18, x_2, x_13);
lean_ctor_set(x_11, 0, x_19);
return x_9;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
lean_inc(x_13);
x_22 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_20, x_2, x_13);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_10, 2, x_23);
return x_9;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
x_26 = lean_ctor_get(x_10, 3);
x_27 = lean_ctor_get(x_10, 4);
x_28 = lean_ctor_get(x_10, 5);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_29 = lean_ctor_get(x_11, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_31 = x_11;
} else {
 lean_dec_ref(x_11);
 x_31 = lean_box(0);
}
lean_inc(x_13);
x_32 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_29, x_2, x_13);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
x_34 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_34, 0, x_24);
lean_ctor_set(x_34, 1, x_25);
lean_ctor_set(x_34, 2, x_33);
lean_ctor_set(x_34, 3, x_26);
lean_ctor_set(x_34, 4, x_27);
lean_ctor_set(x_34, 5, x_28);
lean_ctor_set(x_9, 1, x_34);
return x_9;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_35 = lean_ctor_get(x_9, 0);
lean_inc(x_35);
lean_dec(x_9);
x_36 = lean_ctor_get(x_10, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_10, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_10, 3);
lean_inc(x_38);
x_39 = lean_ctor_get(x_10, 4);
lean_inc(x_39);
x_40 = lean_ctor_get(x_10, 5);
lean_inc(x_40);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 lean_ctor_release(x_10, 2);
 lean_ctor_release(x_10, 3);
 lean_ctor_release(x_10, 4);
 lean_ctor_release(x_10, 5);
 x_41 = x_10;
} else {
 lean_dec_ref(x_10);
 x_41 = lean_box(0);
}
x_42 = lean_ctor_get(x_11, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_11, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_44 = x_11;
} else {
 lean_dec_ref(x_11);
 x_44 = lean_box(0);
}
lean_inc(x_35);
x_45 = l_PersistentHashMap_insert___at___private_Init_Lean_Meta_InferType_11__checkInferTypeCache___spec__4(x_42, x_2, x_35);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
if (lean_is_scalar(x_41)) {
 x_47 = lean_alloc_ctor(0, 6, 0);
} else {
 x_47 = x_41;
}
lean_ctor_set(x_47, 0, x_36);
lean_ctor_set(x_47, 1, x_37);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set(x_47, 3, x_38);
lean_ctor_set(x_47, 4, x_39);
lean_ctor_set(x_47, 5, x_40);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_35);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_9);
if (x_49 == 0)
{
return x_9;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_9, 0);
x_51 = lean_ctor_get(x_9, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_9);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_ctor_get(x_8, 0);
lean_inc(x_53);
lean_dec(x_8);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_4);
return x_54;
}
}
}
}
lean_object* l_Lean_Meta_inferTypeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_inferTypeAuxAux___main___at_Lean_Meta_inferTypeAux___spec__1(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___lambda__1(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__10(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__11(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__8(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_9;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Meta_inferTypeAux___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__24(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___lambda__1(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__25(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__26(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__23(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__28(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___lambda__1(x_1, x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__29(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_withNewLocalInstances___main___at_Lean_Meta_inferTypeAux___spec__30(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Init_Lean_Meta_Basic_7__forallTelescopeReducingAuxAux___main___at_Lean_Meta_inferTypeAux___spec__27(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__33(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_foldMAux___main___at_Lean_Meta_inferTypeAux___spec__34(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
return x_10;
}
}
uint8_t l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 2:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
x_1 = x_4;
goto _start;
}
}
case 3:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
x_1 = x_8;
goto _start;
}
default: 
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Init_Lean_Meta_InferType_12__isAlwaysZero(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_2, x_6);
lean_dec(x_2);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_8 = 2;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Meta_instantiateLevelMVars(x_5, x_3, x_4);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_13);
lean_dec(x_13);
x_15 = l_Bool_toLBool(x_14);
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_17);
lean_dec(x_17);
x_20 = l_Bool_toLBool(x_19);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
case 7:
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_2, x_26);
lean_dec(x_2);
x_1 = x_23;
x_2 = x_27;
goto _start;
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_23);
lean_dec(x_2);
x_29 = 0;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_4);
return x_31;
}
}
case 8:
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_1, 3);
lean_inc(x_32);
lean_dec(x_1);
x_1 = x_32;
goto _start;
}
case 10:
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_dec(x_1);
x_1 = x_34;
goto _start;
}
default: 
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = 2;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_4);
return x_38;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_13__isArrowProp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_InferType_13__isArrowProp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_14__isPropQuickApp___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_3);
x_6 = l___private_Init_Lean_Meta_InferType_10__inferFVarType(x_5, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_7, x_2, x_3, x_8);
lean_dec(x_3);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
case 2:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l___private_Init_Lean_Meta_InferType_9__inferMVarType(x_14, x_3, x_4);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_16, x_2, x_3, x_17);
lean_dec(x_3);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
case 4:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_dec(x_1);
x_25 = l___private_Init_Lean_Meta_InferType_3__inferConstType(x_23, x_24, x_3, x_4);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_26, x_2, x_3, x_27);
lean_dec(x_3);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
case 5:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_2, x_34);
lean_dec(x_2);
x_1 = x_33;
x_2 = x_35;
goto _start;
}
case 6:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_eq(x_2, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_2, x_40);
lean_dec(x_2);
x_1 = x_37;
x_2 = x_41;
goto _start;
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_37);
lean_dec(x_3);
lean_dec(x_2);
x_43 = 0;
x_44 = lean_box(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_4);
return x_45;
}
}
case 8:
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_1, 3);
lean_inc(x_46);
lean_dec(x_1);
x_1 = x_46;
goto _start;
}
case 10:
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_1 = x_48;
goto _start;
}
default: 
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = 2;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_4);
return x_52;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_14__isPropQuickApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Meta_InferType_14__isPropQuickApp___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Init_Lean_Meta_InferType_15__isPropQuick___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 2;
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l___private_Init_Lean_Meta_InferType_10__inferFVarType(x_7, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_9, x_11, x_2, x_10);
lean_dec(x_2);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l___private_Init_Lean_Meta_InferType_9__inferMVarType(x_17, x_2, x_3);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_19, x_21, x_2, x_20);
lean_dec(x_2);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_dec(x_1);
x_29 = l___private_Init_Lean_Meta_InferType_3__inferConstType(x_27, x_28, x_2, x_3);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = l___private_Init_Lean_Meta_InferType_13__isArrowProp___main(x_30, x_32, x_2, x_31);
lean_dec(x_2);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
case 5:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_unsigned_to_nat(1u);
x_40 = l___private_Init_Lean_Meta_InferType_14__isPropQuickApp___main(x_38, x_39, x_2, x_3);
return x_40;
}
case 7:
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_1, 2);
lean_inc(x_41);
lean_dec(x_1);
x_1 = x_41;
goto _start;
}
case 8:
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
lean_dec(x_1);
x_1 = x_43;
goto _start;
}
case 10:
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_1 = x_45;
goto _start;
}
case 11:
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_2);
lean_dec(x_1);
x_47 = 2;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_3);
return x_49;
}
default: 
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_2);
lean_dec(x_1);
x_50 = 0;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_3);
return x_52;
}
}
}
}
lean_object* l___private_Init_Lean_Meta_InferType_15__isPropQuick(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Meta_InferType_15__isPropQuick___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_isPropAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = l___private_Init_Lean_Meta_InferType_15__isPropQuick___main(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
switch (x_7) {
case 0:
{
uint8_t x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
case 1:
{
uint8_t x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_5);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_5, 0);
lean_dec(x_17);
x_18 = 1;
x_19 = lean_box(x_18);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = 1;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
default: 
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_dec(x_5);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Lean_Meta_usingDefault), 4, 1);
lean_closure_set(x_25, 0, x_1);
lean_inc(x_3);
x_26 = l_Lean_Meta_inferTypeAuxAux___main(x_25, x_2, x_3, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_3, 2);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 1;
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 4, x_33);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_34, 2, x_31);
x_35 = lean_apply_3(x_1, x_28, x_34, x_29);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 3)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Meta_instantiateLevelMVars(x_38, x_3, x_37);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_41);
lean_dec(x_41);
x_43 = lean_box(x_42);
lean_ctor_set(x_39, 0, x_43);
return x_39;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_39);
x_46 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_44);
lean_dec(x_44);
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_36);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_35);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_35, 0);
lean_dec(x_50);
x_51 = 0;
x_52 = lean_box(x_51);
lean_ctor_set(x_35, 0, x_52);
return x_35;
}
else
{
lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_35, 1);
lean_inc(x_53);
lean_dec(x_35);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_35);
if (x_57 == 0)
{
return x_35;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_35, 0);
x_59 = lean_ctor_get(x_35, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_35);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_61 = lean_ctor_get(x_27, 0);
x_62 = lean_ctor_get_uint8(x_27, sizeof(void*)*1);
x_63 = lean_ctor_get_uint8(x_27, sizeof(void*)*1 + 1);
x_64 = lean_ctor_get_uint8(x_27, sizeof(void*)*1 + 2);
x_65 = lean_ctor_get_uint8(x_27, sizeof(void*)*1 + 3);
lean_inc(x_61);
lean_dec(x_27);
x_66 = 1;
x_67 = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set_uint8(x_67, sizeof(void*)*1, x_62);
lean_ctor_set_uint8(x_67, sizeof(void*)*1 + 1, x_63);
lean_ctor_set_uint8(x_67, sizeof(void*)*1 + 2, x_64);
lean_ctor_set_uint8(x_67, sizeof(void*)*1 + 3, x_65);
lean_ctor_set_uint8(x_67, sizeof(void*)*1 + 4, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_30);
lean_ctor_set(x_68, 2, x_31);
x_69 = lean_apply_3(x_1, x_28, x_68, x_29);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 3)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; 
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Meta_instantiateLevelMVars(x_72, x_3, x_71);
lean_dec(x_3);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = l___private_Init_Lean_Meta_InferType_12__isAlwaysZero___main(x_74);
lean_dec(x_74);
x_78 = lean_box(x_77);
if (lean_is_scalar(x_76)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_76;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_75);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_70);
lean_dec(x_3);
x_80 = lean_ctor_get(x_69, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_81 = x_69;
} else {
 lean_dec_ref(x_69);
 x_81 = lean_box(0);
}
x_82 = 0;
x_83 = lean_box(x_82);
if (lean_is_scalar(x_81)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_81;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_3);
x_85 = lean_ctor_get(x_69, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_69, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_87 = x_69;
} else {
 lean_dec_ref(x_69);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_3);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_26);
if (x_89 == 0)
{
return x_26;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_26, 0);
x_91 = lean_ctor_get(x_26, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_26);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_5);
if (x_93 == 0)
{
return x_5;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_5, 0);
x_95 = lean_ctor_get(x_5, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_5);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
lean_object* initialize_Init_Lean_LBool(lean_object*);
lean_object* initialize_Init_Lean_Meta_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Meta_InferType(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_LBool(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1 = _init_l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1();
lean_mark_persistent(l___private_Init_Lean_Meta_InferType_1__getForallResultType___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif