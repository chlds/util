/* **** Notes

Concatenate strings.

Remarks:
Refer at fn. concats and fn. concat2.
Along with fn. cpy
*/


# define CAR
# include "../../../incl/config.h"
# include <stdarg.h>

signed(__cdecl concats_internal(signed char(*argp),signed char(*bp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!bp) return(0x00);

p = va_arg(bp,void*);
if(!p) return(0x00);

argp = (argp+(cpy(argp,p)));

return(0x01+(concats_internal(argp,bp)));
}
