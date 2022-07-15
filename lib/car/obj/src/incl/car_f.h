/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


void*(__cdecl alloc(signed(arg)));
/* Allocate i.e., fn. malloc */

signed(__cdecl rl_vw_r(signed short(**argp)));
signed(__cdecl rl_vw(signed short(***argp)));
signed(__cdecl rl_v_r(signed char(**argp)));
signed(__cdecl rl_v(signed char(***argp)));
signed(__cdecl rl(void(*argp)));
/* Release i.e., fn. free */

signed(__cdecl unmap_w(signed short(**argp)));
signed(__cdecl unmap_b(signed char(**argp)));
/* Unmap */

signed(__cdecl cv_va_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_va(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_va(signed char(*sym),signed char(*argp)));
signed(__cdecl ct_wo(signed char(*sym),signed char(*argp)));
/* Map an array of pointers on the RAM. */

signed(__cdecl cv_ww_r(signed short(arg),signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_ww(signed short(arg),signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_ww_r(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl ct_ww(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words_r(signed short(arg),signed(*cache),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words(signed short(arg),signed char(*sym),signed char(*argp)));
/* Map an array of pointers for words-wrap arrays on the RAM */

signed(__cdecl cv_argt_r(signed char(**di),signed char(*si)));
signed(__cdecl cv_argt(signed char(***di),signed char(*si)));
signed(__cdecl cv_v_r(signed char(**di),signed short(*flag),signed char(*si)));
signed(__cdecl cv_v(signed char(***di),signed char(*si)));
/* Map an array of pointers for word-split arrays on and unmap the ones out of the RAM */

signed(__cdecl cv_wv(signed short(*cache),signed short(**di),signed short(**si)));
signed(__cdecl cv_bv(signed char(*cache),signed char(**di),signed char(**si)));
signed(__cdecl cv_bv_xe_r(signed char(*di),signed char(**si)));
signed(__cdecl cv_bv_xe(signed char(**di),signed char(**si)));
/* After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM. */

signed(__cdecl cv_wb_v_r(signed short(**di),signed char(**si)));
signed(__cdecl cv_wb_v(signed short(***di),signed char(**si)));
signed(__cdecl cv_wb(signed short(**di),signed char(*si)));
signed(__cdecl decode_wb_r(signed short(**di),signed char(*si)));
signed(__cdecl decode_wb(signed short(**di),signed char(*si)));
signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si))); // deprecated
signed(__cdecl unpair_dw_r(signed(*di),signed short(*si)));
signed(__cdecl unpair_dw(signed(*di),signed short(*si)));
signed(__cdecl pair_wd_r(signed short(**di),signed(si)));
signed(__cdecl pair_wd(signed short(**di),signed(si)));
signed(__cdecl decode_b_r(signed(arg),signed(*di),signed char(*si)));
signed(__cdecl decode_b(signed(*di),signed char(*si)));
signed(__cdecl decode_surrogate_second(signed short(*di),signed(si)));
signed(__cdecl decode_surrogate_first(signed short(*di),signed(si)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output UTF-16 characters decoded out of UTF-8 bytes */

signed(__cdecl cv_bw_v_r(signed char(**di),signed short(**si)));
signed(__cdecl cv_bw_v(signed char(***di),signed short(**si)));
signed(__cdecl cv_bw(signed char(**di),signed short(*si)));
signed(__cdecl encode_bv_r(signed char(**di),signed short(**si)));
signed(__cdecl encode_bv(signed char(**di),signed short(**si)));
signed(__cdecl encode_bw_r(signed char(**di),signed short(*si)));
signed(__cdecl encode_bw(signed char(**di),signed short(*si)));
signed(__cdecl encode_d_r(signed(arg),signed char(*di),signed(si)));
signed(__cdecl encode_d(signed char(**di),signed(si)));
signed(__cdecl encode_surrogate_w(signed char(**di),signed short(second),signed short(first))); // deprecated
signed(__cdecl ncharbyte(signed(arg)));
/* Encode a character into bytes based on UTF-8. */

signed(__cdecl alert_b_r(signed(arg),signed short(hr),signed short(mn)));
signed(__cdecl alert_b(signed(arg),signed char(*argp)));
signed(__cdecl cv_hr_noon_r(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_noon(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light_rr(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light_r(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*si)));
signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si)));
signed(__cdecl cv_mn(signed short(*mn),signed char(*si)));
signed(__cdecl cv_at(signed short(*hr),signed short(*mn),signed char(*argp)));
/* Convert into time */

signed(__cdecl clip_b(signed(arg),signed char(**argp)));
/* Clip */

signed char *(__cdecl cx_rr(signed char(*di),signed char(*et),signed char(*si)));
signed char *(__cdecl cx_r(signed(digit),signed(arg),signed char(*et),signed char(*argp)));
signed char *(__cdecl cx(signed(digit),signed(arg),signed char(*et),signed char(*argp)));
signed char *(__cdecl cv_r(signed(arg/* n-digit */),signed char(*argp)));
signed char *(__cdecl cv(signed(digit),signed(arg)));
signed char *(__cdecl cat_ahead(signed char(*di),signed char(*si)));
/* convert, concatenate and release */

signed(__cdecl cat_p(signed char(***di),signed char(*si)));
/* Concatenate pointers */

signed(__cdecl /* __attribute__((ms_abi)) */ cat_w_r(signed short(**di),signed short(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_w(signed short(**argp),...));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_b_r(signed char(**di),signed char(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_b(signed char(**argp),...));
/* Concatenate to the terminating null pointer */

signed(__cdecl concatenate_d(signed(arg),signed(**di),signed(*si)));
signed(__cdecl concat_dd(signed(**di),signed(*si)));
signed(__cdecl cat_dd(signed(**di),signed(si)));
signed(__cdecl concatenate_w(signed(arg),signed short(**di),signed short(*si)));
signed(__cdecl concat_ww(signed short(**di),signed short(*si)));
signed(__cdecl cat_ww(signed short(**di),signed short(si)));
signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si)));
signed(__cdecl concat_bb(signed char(**di),signed char(*si)));
signed(__cdecl cat_bb(signed char(**di),signed char(si)));
/* Call fn. rl later to release buffer */

signed(__cdecl cpy2p(signed char(*di),signed char(*deadline),signed char(*si)));
signed(__cdecl cpy2(signed char(cache),signed char(*di),signed char(*si)));
signed(__cdecl ncpy(signed(arg),signed char(*di),signed char(*si)));
signed(__cdecl cpy_p(signed char(**di),signed char(**si)));
signed(__cdecl cpy_q(signed long long(*di),signed long long(*si)));
signed(__cdecl cpy_d(signed(*di),signed(*si)));
signed(__cdecl cpy_w(signed short(*di),signed short(*si)));
signed(__cdecl cpy_b(signed char(*di),signed char(*si)));
signed(__cdecl cpy_l(signed char(*di),signed char(*si)));
signed(__cdecl cpy(signed char(*di),signed char(*si)));
/* Copy to the di out of the si */

signed(__cdecl cue_va_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue_va(signed char(*sym),signed char(*argp)));
signed(__cdecl cue_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue(signed char(*sym),signed char(*argp)));
/* Retrieve bytes to the leading address of a word or symbol. */

signed(__cdecl cue_ready(signed char(*argp)));
signed(__cdecl cue_argt_ready(signed char(*argp)));
signed(__cdecl cue_argt(signed char(*argp)));
/* Cue */

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base)));
signed(__cdecl ct_words(signed char(*sym),signed char(*base)));
/* Count words to the terminating null character */

signed(__cdecl ct_argt_r(signed char(*argp)));
signed(__cdecl ct_argt(signed char(*argp)));
signed(__cdecl ct_wrds_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars(signed(*retv),signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));
signed(__cdecl ct_wrds(signed char(*base)));
signed(__cdecl ct_args(signed char(*argp)));
/* Count arguments to the terminating null character */

signed(__cdecl cv_dv_r(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_dv(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_da_xe_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_xe(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first_r(signed short(arg),signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si)));
/* Convert into a signed double word out of characters */

signed(__cdecl cv_d_r(signed short(radix),signed char(*table),signed char(*di),signed(si)));
signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si)));
/* Convert a signed double word into letters */

signed(__cdecl car_r(signed short(radix),signed(arg)));
signed(__cdecl car(signed short(radix),signed(arg)));
/* Count column digits for a double word */

signed(__cdecl sw_p(void(**di),void(**si)));
signed(__cdecl sw(signed(*di),signed(*si)));
signed(__cdecl nsort(signed(count),signed(*base)));
signed(__cdecl bsort(signed(count),signed(*base)));
/* Switch */

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

signed(__cdecl ctdn_v_r(signed(arg),signed char(**cache),signed char(*argp)));
signed(__cdecl ctdn_v(signed char(**cache),signed char(*argp)));
/* Count letters down to the specific arrays */

signed(__cdecl ctdn_a_r(signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl ctdn_a(signed char(*cache),signed char(*argp)));
/* Count letters down to the specific array */

signed(__cdecl ctdn_r(signed(arg),signed char(sym),signed char(*argp)));
signed(__cdecl ctdn(signed char(sym),signed char(*argp)));
/* Count letters down to the specific symbol */

signed(__cdecl ct_digits_r(signed char(*fig),signed char(*argp)));
signed(__cdecl ct_digits(signed char(*argp)));
/* Count digits */

signed(__cdecl incl_num(signed char(*argp)));
signed(__cdecl cf_no(signed char(*argp)));
/* Confirm numerals */

signed(__cdecl ct_to(signed char(*cache),signed char(*argp)));
signed(__cdecl ct2(signed char(di), signed char(*base)));
/* Count to */

signed(__cdecl ct_f(signed(__cdecl**f)(void(*argp))));
/* Count function pointers */

signed(__cdecl ct_vq(signed long long(**argp)));
signed(__cdecl ct_vd(signed(**argp)));
signed(__cdecl ct_vw(signed short(**argp)));
signed(__cdecl ct_vb(signed char(**argp)));
signed(__cdecl ct_v(signed char(**argp)));
signed(__cdecl ct_p(void(**argp)));
/* Count pointers */

signed(__cdecl ct_q(signed long long(*argp)));
signed(__cdecl ct_d(signed(*argp)));
signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct_b(signed char(*argp)));
signed(__cdecl ct_l(signed char(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count */

signed(__cdecl bpb_r(signed char(arg)));
signed(__cdecl bpb(void));
/* Bits par byte */
