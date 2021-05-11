/* **** Notes

Concatenate strings.
*/


# define CAR
# include <stdarg.h>
# include "../../../incl/config.h"

signed(__cdecl concat_b_r(signed char(*argp),signed char(*bp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);
if(!bp) return(0x00);

b = va_arg(bp,void*);
if(!b) return(0x00);

argp = (argp+(cpy(argp,b)));

return(0x01+(concat_b_r(argp,bp)));
}
