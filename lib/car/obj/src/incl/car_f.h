/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl embedback_r(signed(arg),signed char(*argp)));
signed(__cdecl embedback(signed(arg),signed char(*argp)));
signed(__cdecl embed_v_rr(signed(arg),signed char(**argp)));
signed(__cdecl embed_v_r(signed char(**argp)));
signed(__cdecl embed_v(signed(arg),signed char(**argp)));
signed(__cdecl embed_d_rr(signed(arg),signed(*argp)));
signed(__cdecl embed_d_r(signed(*argp)));
signed(__cdecl embed_d(signed(arg),signed(*argp)));
signed(__cdecl embed_w_l_rr(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_l_r(signed short(*argp)));
signed(__cdecl embed_w_l(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_rr(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_r(signed short(*argp)));
signed(__cdecl embed_w(signed(arg),signed short(*argp)));
signed(__cdecl embed_l_rr(signed(arg),signed char(*argp)));
signed(__cdecl embed_l_r(signed char(*argp)));
signed(__cdecl embed_l(signed(arg),signed char(*argp)));
signed(__cdecl embed_rr(signed(arg),signed char(*argp)));
signed(__cdecl embed_r(signed char(*argp)));
signed(__cdecl embed(signed(arg),signed char(*argp)));
// Embed

signed(__cdecl ct_f(signed(__cdecl**f)(void(*argp))));
/* Count function pointers. */

signed(__cdecl ct_vq(signed long long(**argp)));
signed(__cdecl ct_vd(signed(**argp)));
signed(__cdecl ct_vw(signed short(**argp)));
signed(__cdecl ct_vb(signed char(**argp)));
signed(__cdecl ct_v(signed char(**argp)));
signed(__cdecl ct_p(void(**argp)));
/* Count pointers. */

signed(__cdecl ct_q(signed long long(*argp)));
signed(__cdecl ct_d(signed(*argp)));
signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct_b(signed char(*argp)));
signed(__cdecl ct_l(signed char(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count. */
