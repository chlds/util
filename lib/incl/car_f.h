/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl store_b(signed short(linebreak),signed(access_right),signed(permission),signed char(*b),signed char(*path)));

signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si)));

signed(__cdecl concat_argv_rr(signed char(*di),signed char(**si)));
signed(__cdecl concat_argv_r_r(signed(*di),signed char(**si)));
signed(__cdecl concat_argv_r(signed(*di),signed char(**si)));
signed(__cdecl concat_argv(signed(offset),signed char(**di),signed char(**si)));

signed(__cdecl sub_da(signed(arg),signed char(*argp)));

signed(__cdecl ct2words_r_r(signed char(**vi),signed(*di),signed char(*si)));
signed(__cdecl ct2words_r(signed char(***vi),signed(*di),signed char(*si)));
signed(__cdecl ct2words(signed char(***vi),signed(*di),signed char(*si)));
// count to the words out of characters.

signed(__cdecl cv_mo_r_r(signed char(**vi),signed short(*di),signed char(*si)));
signed(__cdecl cv_mo_r(signed char(***vi),signed short(*di),signed char(*si)));
signed(__cdecl cv_mo(signed short(*di),signed char(*si)));
// convert to a month out of characters.

signed(__cdecl ct_weeks_internal(signed(sec_in_week),signed long long/* time_t */(sec)));
signed(__cdecl ct_weeks(signed long long/* time_t */(criterion),signed long long/* time_t */(sec)));
// count calendar weeks

signed(__cdecl find_a_first_month_internal(signed short(flag),signed short(mon),signed short(current_month),signed long long/* time_t */(*argp),signed long long/* time_t */(arg)));
signed(__cdecl find_a_first_month(signed short(mon),signed long long/* time_t */(*argp),signed long long/* time_t */(arg)));
// retrieve second minutes of a first week of the first month, refer time.h

signed(__cdecl find_a_first_week_internal(signed short(wk),signed short(current_day),signed long long/* time_t */(*argp),signed long long/* time_t */(arg)));
signed(__cdecl find_a_first_week(signed short(wk),signed long long/* time_t */(*argp),signed long long/* time_t */(arg)));
signed(__cdecl elapse_days_since(signed short(wk),signed long long/* time_t */(arg)));
// retrieve second minutes of a first day of the first week, refer time.h

signed(__cdecl embed_to(signed char(*argp),signed char(arg),signed(times)));
signed(__cdecl embed_internal(signed char(*argp)));
signed(__cdecl embed(signed short(flag),signed char(*argp)));
// Embed

signed(__cdecl keep_w(signed short(**di),signed char(*si)));
signed(__cdecl keep(signed char(**di),signed char(*si)));
signed(__cdecl release(signed(n),void(**argp)));
/* Please be sure to release. */

signed(__cdecl extend(signed char(**argp),signed(*total),signed(extra)));
signed(__cdecl recharge(signed char(**argp),signed(arg)));
// Unmap and map.

signed(__cdecl cli_unmap(signed(times),signed char(**argp)));
// Unmap.

signed(__cdecl cv_da_first_internal(signed short(terminate),signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_internal(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si)));
// convert to a signed/unsigned double word out of characters.

signed(__cdecl ord(signed char(*di),signed char(si)));
// check the ordinal number.

signed(__cdecl cv_d_internal(signed short(radix),signed char(*di),signed(si)));
signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si)));
// convert a signed double word into letters.

signed(__cdecl car(signed short(radix),signed(arg)));
// count column digits for a double word.

signed(__cdecl countback_to(signed char(*edge),signed char(*sym),signed char(*argp)));
// count back to a symbol or to the leading address.

signed(__cdecl count_to(signed char(*sym),signed char(*argp)));
// count to a symbol or to the terminating null character.

signed(__cdecl cmpr_parts_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_parts(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr(signed(*cache),signed char(*di),signed char(*si)));
/* Compare strings. */

signed(__cdecl compare(signed char(*di),signed char(*si)));
/* Compare addresses. */

signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count. */

signed(__cdecl encode_bw_internal(ENCODE_PACK(*argp)));
signed(__cdecl encode_bw(signed char(**di),signed short(*si)));

signed(__cdecl encode2b(signed(size),signed char(*di),signed short(*si)));
signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si)));
/* Decode/encode */

signed(__cdecl cli_in_w(signed(*character),signed char(*argp),signed(size)));
signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(size)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

signed(__cdecl encode2uni_internal(signed(nbyte),signed(size),signed char(*array),signed(character)));
signed(__cdecl encode2uni(signed(size),signed char(*array),signed(character)));
signed(__cdecl encode_surrogate_bw(signed(size),signed char(*array),signed short(second),signed short(first)));
signed(__cdecl ncharbyte(signed(arg)));
/* Generate Unicode bytes encoded out of Unicode characters */

signed(__cdecl cli_outs(signed char(*argp)));
signed(__cdecl cli_out(signed char(*argp)));
signed(__cdecl decode2uni_internal(signed(nbyte),signed(*character),signed char(*argp)));
signed(__cdecl decode2uni(signed(*character),signed char(*argp)));
signed(__cdecl decode_surrogate_second(signed short(*di),signed(si)));
signed(__cdecl decode_surrogate_first(signed short(*di),signed(si)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output Unicode characters decoded out of Unicode bytes */

signed(__cdecl cue_backward_internal(signed short(flag),signed char(**retrv),signed char(*sym),signed char(*base)));
signed(__cdecl cue_backward(signed char(**retrv),signed char(*sym),signed char(*base),signed char(*offset)));
/* Retrieve the leading address to a previous word or symbol. */

signed(__cdecl cue(signed char(*sym),signed char(*argp)));
/* Retrieve bytes to the leading address of a word or symbol. */

signed(__cdecl cue2l(signed char(*sym),signed char(*argp)));
signed(__cdecl deviate(signed char(*sym),signed char(*base),signed char(*index)));
/* Retrieve bytes to the leading address of a word. */

signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset)));
signed(__cdecl column(signed short(cols),signed(algn),signed char(*base)));
/* For columnists. */

signed(__cdecl calc_coord_internal(COORDS(*coords),signed char(*secure),signed char(*argp),signed char(*base),signed(cols)));
signed(__cdecl calc_coord(COORDS(*coords),signed char(*argp),signed(cols)));
/* Calculate coordinates of the terminating address of an array for characters, taking into account deviations caused by wrapping words. */
/* Refer at incl/ll.h for COORDS. */

signed(__cdecl reading(signed char(*di),signed(size)));

signed(__cdecl pickfiles(signed char(*di /* path */ ), signed char(*si /* string */ )));
signed(__cdecl rddir(void/* C_DIRS_INFO */(*argp)));
signed(__cdecl finds(void/* C_DIRS_INFO */(*argp)));
/* Close, read and open a directory entry out of the argp. */

signed(__cdecl descend_ll(KNOT(**di),KNOT(*si)));
signed(__cdecl ascend_ll(KNOT(**di),KNOT(*si)));

signed(__cdecl unmap_ll_internal(signed short(flag),KNOT(*lead),KNOT(*base)));
signed(__cdecl unmap_ll(signed short(flag),REEL(*argp)));
/* Unmap a circular/doubly linked list. */

signed(__cdecl output_ll(KNOT(*argp)));

signed(__cdecl concat_ll(signed short(flag),KNOT(*cache),REEL(*argp)));
/* Build a circular/doubly linked list. */

signed(__cdecl concats_internal(signed char(*di), signed char(*bp)));
signed(__cdecl concats(signed char(*argp), ...));
/* Copy concatenated strings to the argp (using along with fn. concats_internal). */

signed(__cdecl concat2(signed char(*argp), ...));
/* Append strings to the argp (using along with fn. concats_internal). */

signed(__cdecl append2(signed char(*di), signed char(*si)));
/* Append the si to the di. */

signed(__cdecl spltfree2_internal(signed char(**argp)));
signed(__cdecl spltfree2(signed char(**argp)));
signed(__cdecl spltfree(signed char(**argp)));
signed(__cdecl splt(signed char(***di), signed char(*base)));
/* Map word-split arrays on and unmap the ones out of the RAM */

signed(__cdecl cue2(signed char(*base)));
/* Cue */

signed(__cdecl cmpr_parts(signed(*cache), signed char(*di), signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache), signed char(*di), signed char(*si)));
signed(__cdecl cmpr(signed(*cache), signed char(*di), signed char(*si)));
/* Compare the ones in case sensitive strings */

signed(__cdecl ct_words_internal(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_words(signed(*retv),signed char(*base)));
/* Count words to the terminating null character. */

signed(__cdecl ct_ars_internal(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars(signed(*retv),signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));
signed(__cdecl ct_args(signed char(*argp)));
/* Count arguments to the terminating null character. */

signed(__cdecl cpy2p(signed char(*di), signed char(*deadline), signed char(*si)));
signed(__cdecl ncpy(signed char(*di), signed char(*si), signed(arg)));
signed(__cdecl cpy2(signed char(cache), signed char(*di), signed char(*si)));
signed(__cdecl cpy(signed char(*di), signed char(*si)));
/* Copy to the di out of the si */

signed(__cdecl include_num_internal(signed short(*flagp), signed char(*argp)));
signed(__cdecl include_num(signed char(*argp)));
/* Check numerals. */

signed(__cdecl ctdn2lastws_internal(signed(arg),signed char(*argp)));
signed(__cdecl ctdn2lastws(signed char(*argp)));

signed(__cdecl ctdn2lastsp_internal(signed(arg),signed char(*argp)));
signed(__cdecl ctdn2lastsp(signed char(*argp)));
/* Count down to the last space (SP) or to the last whitespace (SP/HT) */

signed(__cdecl cipher_embed_r(signed char(*di), signed(n)));
signed(__cdecl cipher_embed(signed char(*di), signed(n)));
/* Embed (0x00) (n) times out of the di. */

signed(__cdecl align_backward(signed(arg),signed char(*argp)));
signed(__cdecl align(signed(arg),signed char(*argp)));
/* Return the number of spaces that are output when the tab key is pressed. */

signed(__cdecl ct_txt_here_internal(signed(align),signed(*argp),signed char(*di),signed char(*base)));
signed(__cdecl ct_txt_here(signed(align),signed char(*di),signed char(*base)));
/* Count letters along with alignement of the tab to the current (or specific) address. */

signed(__cdecl ct_txt_internal(signed(align), signed(*argp), signed char(*base)));
signed(__cdecl ct_txt(signed(align), signed char(*base)));
/* Count letters along with alignement of the tab to the null character. */

signed(__cdecl ct_offset_out_of_last_internal(signed char(arg), signed(len), signed char(*argp)));
signed(__cdecl ct_offset_out_of_last(signed char(arg), signed char(*argp)));
/* Count offset out of the last arg. */

signed(__cdecl ct2specials(signed char(*argp)));

signed(__cdecl ct_word(signed char(*argp)));
/* Count length of a word or to the terminating null character. */

signed(__cdecl ct_word_backward(signed(left),signed char(*argp)));
/* Count length of a word backward. */

signed(__cdecl ct2firstletter_internal(signed(rest),signed char(*cur)));
signed(__cdecl ct2firstletter(signed char(*cur),signed char(*orig)));
/* Count up to the first letter of one word on the current address. */

signed(__cdecl ct2here(signed char(*cur),signed char(*orig)));
/* Count length of characters/bytes up to the current address. */

signed(__cdecl ct2nonblank_r_internal(signed(rest),signed char(*cur)));
signed(__cdecl ct2nonblank_r(signed char(*cur),signed char(*orig)));
/* Reversely count up to a non-blank place. */

signed(__cdecl ct2nonblank(signed char(*argp)));
/* Count up to a non-blank place (or to the terminating null character). */

signed(__cdecl ct2_only(signed char(di), signed char(*deadline), signed char(*argp)));
signed(__cdecl ct_only(signed char(di), signed char(*argp)));
/* Count a specific letter only. */

signed(__cdecl ct2_except_internal(signed char(cache), signed(*di), signed char(*base)));
signed(__cdecl ct2_except(signed char(cache), signed char(*base)));
signed(__cdecl ct_except(signed char(di), signed char(*base)));
/* Count letters to the terminating null character except for the one you'd select. */

signed(__cdecl ct2(signed char(di), signed char(*base)));
signed(__cdecl ct(signed char(*argp)));
/* Count letters to the one you'd select or to the terminating null character. */

signed(__cdecl n_putch(signed(n),signed(letter)));
/* Output the letter n times. */

signed(__cdecl cat_ll(KNOT(*argp)));

signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));
/* Output character lines out of the argument. */
