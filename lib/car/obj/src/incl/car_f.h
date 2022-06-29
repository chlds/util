/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl cmpr_part_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_part(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_w_r(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_w(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr(signed(*cache),signed char(*di),signed char(*si)));
/* Compare ones in case sensitive character strings */

signed(__cdecl reords_partially(signed char(**di),signed char(*si)));
signed(__cdecl reords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords_partially(signed char(**di),signed char(*si)));
signed(__cdecl ords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords(signed char(**di),signed char(*si)));
signed(__cdecl ord(signed char(*di),signed char(si)));
signed(__cdecl ord_vd(signed(**di),signed(si)));
signed(__cdecl ord_d(signed(*di),signed(si)));
/* Check the ordinal number. */

signed(__cdecl rm_trails_r(signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl rm_trails(signed char(*cache),signed char(*argp)));
signed(__cdecl rm_brs(signed char(*argp)));
signed(__cdecl rm_trailing_spaces_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_spaces(signed char(*argp)));
signed(__cdecl rm_trailing_blanks_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_blanks(signed char(*argp)));
signed(__cdecl rm_br_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_br(signed char(*argp)));
signed(__cdecl rm_asterisk_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_asterisk(signed char(*argp)));
// Remove

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
