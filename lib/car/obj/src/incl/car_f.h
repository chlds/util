/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl ct_q(signed long long(*argp)));
signed(__cdecl ct_d(signed(*argp)));
signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct_b(signed char(*argp)));
signed(__cdecl ct_l(signed char(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count. */

signed(__cdecl ct_f(signed(__cdecl**f)(void(*argp))));
/* Count function pointers. */

signed(__cdecl ct_v(signed char(**argp)));
signed(__cdecl ct_p(void(**argp)));
/* Count pointers. */
