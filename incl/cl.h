/*

Along with C library
*/


# ifdef CL_MACRO
# include "./cli_macro.h"
# endif

signed(__cdecl cli_support_meta_keys(signed(*character),signed char(first),signed char(second)));
/* Support for function and arrow keys */

signed(__cdecl encode2b(signed(size),signed char(*di),signed short(*si)));
signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si)));
/* Decode/encode */

signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(size)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

signed(__cdecl encode2uni_internal(signed(nbyte),signed(size),signed char(*array),signed(character)));
signed(__cdecl encode2uni(signed(size),signed char(*array),signed(character)));
signed(__cdecl ncharbyte(signed(arg)));
/* Generate Unicode bytes encoded out of Unicode characters */

signed(__cdecl cli_outs(signed char(*argp)));
signed(__cdecl cli_out(signed char(*argp)));
signed(__cdecl decode2uni_internal(signed(nbyte),signed(*character),signed char(*argp)));
signed(__cdecl decode2uni(signed(*character),signed char(*argp)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output Unicode characters decoded out of Unicode bytes */

signed(__cdecl cli_wrap_internal(signed char(**wrap),signed char(*di),signed char(*si)));
signed(__cdecl cli_wrap(signed char(**wrap),signed char(*di),signed char(*si)));
/* Retrieve the leading address after wrapping words. */

signed(__cdecl cue_backward_internal(signed short(flag),signed char(**retrv),signed char(*base)));
signed(__cdecl cue_backward(signed char(**retrv),signed char(*base),signed char(*offset)));
/* Retrieve the leading address to a previous word. */

signed(__cdecl embed_to(signed char(*argp),signed char(arg),signed(times)));
// Embed

signed(__cdecl keep(signed char(**di),signed char(*si)));
/* Please be sure to release. */

signed(__cdecl extend(signed char(**argp),signed(*total),signed(extra)));
signed(__cdecl recharge(signed char(**argp),signed(arg)));
// Unmap and map.

signed(__cdecl cli_unmap(signed(times),signed char(**argp)));
// Unmap.

signed(__cdecl countback_to(signed char(*edge),signed char(*sym),signed char(*argp)));
// count back to a symbol or to the leading address.

signed(__cdecl count_to(signed char(*sym),signed char(*argp)));
// count to a symbol or to the terminating null character.

signed(__cdecl cmpr_parts(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr(signed(*cache),signed char(*di),signed char(*si)));
/* Compare strings. */

// and more..