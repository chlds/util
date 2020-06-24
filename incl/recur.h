/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset)));
signed(__cdecl column(signed short(cols),signed(algn),signed char(*base)));
/* For columnists. */

signed(__cdecl calc_coord_internal(COORDS(*coords),signed char(*secure),signed char(*argp),signed char(*base),signed(cols)));
signed(__cdecl calc_coord(COORDS(*coords),signed char(*argp),signed(cols)));
/* Calculate coordinates of the terminating address of an array for characters, taking into account deviations caused by wrapping words. */
/* Refer at incl/las.h for ALIGN_TAB and at incl/ll.h for COORDS. */

signed(__cdecl pickfiles(signed char(*di /* path */ ), signed char(*si /* string */ )));
signed(__cdecl rddir(signed short(cmdln_flag), void /* or struct dir_info_stored */ (*argp)));
signed(__cdecl finds(signed short(cmdln_flag), signed char(*argp)));
/* Close, read and open a directory entry out of the argp. */

signed(__cdecl descend_ll(KNOT(**di),KNOT(*si)));
signed(__cdecl ascend_ll(KNOT(**di),KNOT(*si)));

signed(__cdecl unmap2_cirll(struct knot(*argp)));
signed(__cdecl unmap_cirll(struct knot(*argp)));
/* Based on a circular linked list */

signed(__cdecl unmap_history(SNAPSHOT(**argp)));
signed(__cdecl unmap2_ll(struct knot(*argp)));
signed(__cdecl unmap_ll(struct knot(*argp)));

signed(__cdecl output_ll(KNOT(*argp)));

signed(__cdecl concat2ll_for_history(SNAPSHOT(*cache),SNAPSHOT(**lead),SNAPSHOT(**base)));
signed(__cdecl concat2_ll(KNOT(*cache),KNOTS(*argp)));
/* Based on a doubly linked list */

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

signed(__cdecl cat_ll_and_histories(KNOT(*argp)));
signed(__cdecl cat_ll(KNOT(*argp)));
signed(__cdecl cat_history(SNAPSHOT(*argp)));

signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));
/* Output character lines out of the argument. */
