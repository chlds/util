/* **** Notes

Concatenate strings.

Remarks:
Using along with fn. concats, with fn. concat2 and with fn. cpy.
*/


# include <stdarg.h>

signed(__cdecl concats_internal(signed char(*argp),signed char(*bp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!bp) return(0x00);

p = va_arg(bp,void*);

if(!p) return(0x00);

r = cpy(argp,p);

if(!r) return(0x00);
else argp = (argp+(r));

return(0x01+(concats_internal(argp,bp)));
}
