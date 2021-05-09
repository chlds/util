/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Put a null pointer at the end of arguments.
Release buffer later.
*/


# define CAR
# include <stdarg.h>
# include "./../../../incl/config.h"

signed(__cdecl cat_b(signed char(**argp),...)) {

auto signed char **b;

if(!argp) return(0x00);
// if(!(*argp)) return(0x00);

b = (signed char(**)) (&argp);
b++;

return(cat_b_r(argp,b));
}
