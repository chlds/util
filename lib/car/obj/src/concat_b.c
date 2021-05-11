/* **** Notes

Concatenate strings to the argp.

Put sufficient buffer at the argp.

Remarks:
Put the null address at the terminating argument.
*/


# define CAR
# include <stdarg.h>
# include "../../../incl/config.h"

signed(__cdecl concat_b(signed char(*argp),...)) {

auto signed char *bp;
auto signed r;

if(!argp) return(0x00);

va_start(bp,argp);

r = concat_b_r(argp,bp);

va_end(bp);

return(r);
}
