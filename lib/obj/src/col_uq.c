/* **** Notes

Count the column digits for an unsigned quad word.

base: Put an integer at.
//*/


// # include "../../../incl/config.h"

signed(__cdecl col_uq(signed short(radix), unsigned long long(base))) {

/* **** DATA, BSS and STACK */
auto signed short const(HEXA) = (0x10);
auto signed short const(DECI) = (0x0A);
auto signed short const(BINA) = (0x02);

/* **** CODE/TEXT */
if(radix<(BINA)) radix = (BINA);
if(HEXA<(radix)) radix = (HEXA);

base = base/(radix);
if(!base) return(0x01);

return(1+(col_uq(radix, base)));
}
