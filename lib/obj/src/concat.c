/* **** Notes

Concatenate strings to the <argp>.

argp: Put the leading address of a buffer at.
*/


# include <stdarg.h>

signed(__cdecl concat(signed char(*argp), ...)) {

/* **** DATA, BSS and STACK */
auto signed char(*bp);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

va_start(bp, argp);

r = concat_internal(argp, bp);

va_end(bp);

return(r);
}
