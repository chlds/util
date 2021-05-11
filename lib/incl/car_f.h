/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed char(*__cdecl rf_env(signed char(*argp)));
// refer.

void*(__cdecl alloc(signed(arg)));
// allocate i.e., fn. malloc.

signed(__cdecl rl(void(*argp)));
// release i.e., fn. free.

signed(__cdecl cat_b_r(signed char(**cache),signed char(**argp)));
signed(__cdecl cat_b(signed char(**argp),...));
/* Concatenate to the terminating null pointer. */

signed(__cdecl cv_bv_r(signed char(*di),signed char(**si)));
signed(__cdecl cv_bv(signed char(**di),signed char(**si)));
/* After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM. */

signed(__cdecl cv_argv_bw_r(signed char(**di),signed short(**si)));
signed(__cdecl cv_argv_bw(signed char(***di),signed short(**si)));
// convert into a table pointer of pointers secured for bytes in UTF-8.

signed(__cdecl rl_argv_r(signed char(**argp)));
signed(__cdecl rl_argv(signed char(***argp)));

signed(__cdecl rf_leap_years(signed short(arg)));
// refer leap years.

signed(__cdecl read_b_r(signed(fd),signed char(delim),signed short(*flag),signed char(**b)));
signed(__cdecl read_b(signed(fd),signed char(delim),signed char(**b)));

signed(__cdecl store_b(signed short(linebreak),signed(access_right),signed(permission),signed char(*b),signed char(*path)));

signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*si)));
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

signed(__cdecl keep_w(signed short(**di),signed char(*si)));
signed(__cdecl keep(signed char(**di),signed char(*si)));
signed(__cdecl release(signed(arg),void(**argp)));
/* Please be sure to release. */

signed(__cdecl extend(signed char(**argp),signed(*total),signed(extra)));
signed(__cdecl recharge(signed char(**argp),signed(arg)));
// Unmap and map.

signed(__cdecl cli_unmap(signed(times),signed char(**argp)));
// Unmap.

signed(__cdecl cv_da_first_r(signed short(arg),signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si)));
// convert into a signed double word out of characters.

signed(__cdecl ord(signed char(*di),signed char(si)));
// check the ordinal number.

signed(__cdecl cv_d_r(signed short(radix),signed char(*table),signed char(*di),signed(si)));
signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si)));
// convert a signed double word into letters.

signed(__cdecl car_r(signed short(radix),signed(arg)));
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

signed(__cdecl ct_bv_r(signed(*di),signed char(**si)));
signed(__cdecl ct_bv(signed(*di),signed char(**si)));
/* count the number of bytes up */

signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count. */

signed(__cdecl ct_a_back_r(signed char(*argp)));
signed(__cdecl ct_a_back(signed char(*argp)));
signed(__cdecl ct_a(signed char(*argp)));
/* Based on UTF-8 */

signed(__cdecl encode_bw_r(signed char(**di),signed short(*si)));
signed(__cdecl encode_bw(signed char(**di),signed short(*si)));
/* Encode along with surrogate pairs. */

signed(__cdecl encode2b_r(signed char(**di),signed short(*si)));
signed(__cdecl encode2b(signed char(**di),signed short(*si)));
/* Encode along with no surrogate pairs. */

signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si)));
/* Decode */

signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(size)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

signed(__cdecl cli_support_meta_keys(signed(*character),signed char(second),signed char(first)));
/* Support for function and arrow keys */

signed(__cdecl encode_w_r(signed(arg),signed char(*di),signed(si)));
signed(__cdecl encode_w(signed char(**di),signed(si)));
signed(__cdecl encode_surrogate_w(signed char(**di),signed short(second),signed short(first)));
signed(__cdecl ncharbyte(signed(arg)));
/* Encode a character into bytes based on UTF-8. */

signed(__cdecl cli_outs(signed char(*argp)));
signed(__cdecl cli_out(signed char(*argp)));
signed(__cdecl decode_b_r(signed(arg),signed(*di),signed char(*si)));
signed(__cdecl decode_b(signed(*di),signed char(*si)));
signed(__cdecl decode_surrogate_second(signed short(*di),signed(si)));
signed(__cdecl decode_surrogate_first(signed short(*di),signed(si)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output Unicode characters decoded out of Unicode bytes */

signed(__cdecl cue_backward_r(signed short(flag),signed char(**retrv),signed char(*sym),signed char(*base)));
signed(__cdecl cue_backward(signed char(**retrv),signed char(*sym),signed char(*offset),signed char(*base)));
signed(__cdecl cue_back2_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back2(signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back(signed char(*sym),signed char(*cache),signed char(*argp)));
/* Retrieve the leading address to a previous word or symbol. */

signed(__cdecl cue_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue(signed char(*sym),signed char(*argp)));
/* Retrieve bytes to the leading address of a word or symbol. */

signed(__cdecl cue2l(signed char(*sym),signed char(*argp)));
signed(__cdecl deviate(signed char(*sym),signed char(*base),signed char(*index)));
/* Retrieve bytes to the leading address of a word (to wrap words). */

signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset)));
signed(__cdecl column(signed short(cols),signed(algn),signed char(*base)));
/* For columnists. */

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

signed(__cdecl concat_b_r(signed char(*di), signed char(*bp)));
signed(__cdecl concat_b(signed char(*argp), ...));
/* Copy strings to the argp (with sufficient buffer). */

signed(__cdecl append_b(signed char(*di),signed char(*si)));
/* Append the si to the di. */

signed(__cdecl rl_v_r(signed char(**argp)));
signed(__cdecl rl_v(signed char(***argp)));
signed(__cdecl cv_v_r(signed(arg),signed char(**di),signed char(*si)));
signed(__cdecl cv_v(signed char(***di),signed char(*si)));
/* Map word-split arrays on and unmap the ones out of the RAM */

signed(__cdecl cue2(signed char(*base)));
/* Cue */

signed(__cdecl cmpr_parts(signed(*cache), signed char(*di), signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache), signed char(*di), signed char(*si)));
signed(__cdecl cmpr(signed(*cache), signed char(*di), signed char(*si)));
/* Compare the ones in case sensitive strings */

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base)));
signed(__cdecl ct_words(signed char(*sym),signed char(*base)));
/* Count words to the terminating null character. */

signed(__cdecl ct_wrds_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars(signed(*retv),signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));
signed(__cdecl ct_wrds(signed char(*base)));
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

signed(__cdecl ctdn_to_wrap_r(signed short(edge),signed(arg/* align */),signed(*retv),signed char(*cache/* sym */),signed char(*argp)));
signed(__cdecl ctdn_to_wrap(signed short(edge),signed(arg/* align */),signed char(*cache/* sym */),signed char(*argp)));
/* Count down to wrap words. */

signed(__cdecl ctdn_to_r(signed short(flag),signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl ctdn_to(signed char(*cache),signed char(*argp)));
signed(__cdecl cf(signed short(*flag),signed char(*cache),signed char(*argp)));
/* Count down letters to find an offset point. */

signed(__cdecl align_backward(signed(arg),signed char(*argp)));
signed(__cdecl align(signed(arg),signed char(*argp)));
/* Return the number of spaces that are output when the tab key is pressed. */

signed(__cdecl ct_txt_internal(signed(arg/* align */),signed(*retv),signed char(*argp)));
signed(__cdecl ct_txt(signed(arg/* align */),signed char(*argp)));
signed(__cdecl ct_tx(signed(to),signed(arg/* align */),signed char(*argp)));
/* Count letters along with alignement of the tab to the null character. */

signed(__cdecl ct_offset_out_of_last_internal(signed char(arg), signed(len), signed char(*argp)));
signed(__cdecl ct_offset_out_of_last(signed char(arg), signed char(*argp)));
/* Count offset out of the last arg. */

signed(__cdecl ct_word_backward(signed(left),signed char(*argp)));
/* Count length of a word backward. */

signed(__cdecl ct2_only(signed char(di), signed char(*deadline), signed char(*argp)));
signed(__cdecl ct_only(signed char(di), signed char(*argp)));
/* Count a specific letter only. */

signed(__cdecl ct_except(signed char(arg),signed char(*argp)));
/* Count letters to the terminating null character except for the one you'd select. */

signed(__cdecl ct_characters(signed char(*argp)));
signed(__cdecl ct_letters(signed char(*argp)));

signed(__cdecl ct_to(signed char(*cache),signed char(*argp)));
signed(__cdecl ct2(signed char(di), signed char(*base)));
signed(__cdecl ct(signed char(*argp)));
/* Count letters up to one or more you'd select or to the terminating null character. */

signed(__cdecl ct_f(signed(__cdecl**(f)) (void(*argp))));
/* Count function pointers. */

signed(__cdecl ct_p(void(**argp)));
/* Count pointers. */

signed(__cdecl embedback_r(signed(arg),signed char(*argp)));
signed(__cdecl embedback(signed(arg),signed char(*argp)));
signed(__cdecl embed_spaces_r(signed(arg),signed char(*argp)));
signed(__cdecl embed_spaces(signed char(*argp)));
signed(__cdecl embed_rr(signed(arg),signed char(*argp)));
signed(__cdecl embed_r(signed char(*argp)));
signed(__cdecl embed(signed(arg),signed char(*argp)));
// Embed

signed(__cdecl n_putch(signed(n),signed(letter)));
/* Output the letter n times. */

signed(__cdecl nsort(signed(count),signed(*base)));
signed(__cdecl bsort(signed(count),signed(*base)));

signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si)));
/* Release the *di later. */

signed(__cdecl cv_l_r(signed short(radix),signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed(__cdecl cv_l(signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed char*(__cdecl cv_a(signed(arg),signed char(*argp)));
/* Release at the return pointer later */

signed(__cdecl cat_ll(KNOT(*argp)));

signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));
/* Output character lines out of the argument. */
