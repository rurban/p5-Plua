#ifndef PLU_LUE_H_
#define PLU_LUE_H_

/* Code related to interacting with Lua */

#include <EXTERN.h>
#include <perl.h>

#include <lua.h>

/* Create new Lua interpreter and initialize it */
lua_State *plu_new_lua_state(pTHX);

int plu_compile_lua_block_or_croak(pTHX_ char *code, STRLEN len);

/* Returns status from executing lua_func_name. Uses global PLU_lua_int */
/* int plu_call_lua_func(pTHX_ const char *lua_func_name); */

/* Returns status from executing Lua func (previous stored in registry).
 * Uses global PLU_lua_int */
int plu_call_lua_func_via_registry(pTHX_ const int registry_idx);

/* Call this after plu_call_lua_func returns != 0 */
SV *plu_get_lua_errmsg(pTHX);

#endif
