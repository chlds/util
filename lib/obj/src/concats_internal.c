/* **** Notes

Concatenate strings.

Remarks:
Using along with fn. concat.
*/


# include <stdarg.h>

signed(__cdecl concats_internal(signed char(*di), signed char(*bp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p);
auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!bp) return(0x00);

p = va_arg(bp, void*);

if(!p) return(0x00);

r = cpy(di, p);

if(!r) return(0x00);
else di = (di+(r));

return(1+(concats_internal(di, bp)));
}
