#ifndef PZ_LUE_H_
#define PZ_LUE_H_

/* Code related to interacting with Lua */

#include <EXTERN.h>
#include <perl.h>

int pz_compile_lua_block_or_croak(pTHX_ char *code, STRLEN len);

/* returns status from executing lua_func_name. Uses global PZ_lua_int */
int pz_call_lua_func(pTHX_ const char *lua_func_name);

#endif