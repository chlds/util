/* **** Notes

Append strings to the argp (using along with fn. ct and with fn. concats_internal).

argp: Put the leading address of a buffer at.

Remarks:
Put the null address at the terminating argument.
*/


# define CAR
# include "../../../incl/config.h"
# include <stdarg.h>

signed(__cdecl concat2(signed char(*argp), ...)) {

/* **** DATA, BSS and STACK */
auto signed char(*bp);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = ct(argp);
// if(!r) return(0x00);

va_start(bp, argp);

argp = (argp+(r));
r = concats_internal(argp, bp);

va_end(bp);

return(r);
}
