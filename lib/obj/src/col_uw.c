/* **** Notes

Count the column digits for an unsigned word.

base: Put an integer at.
//*/


// # include "../../../incl/config.h"

signed(__cdecl col_uw(signed short(radix), unsigned short(base))) {

/* **** DATA, BSS and STACK */
auto signed short const(HEXA) = (0x10);
auto signed short const(DECI) = (0x0A);
auto signed short const(BINA) = (0x02);

/* **** CODE/TEXT */
if(radix<(BINA)) radix = (BINA);
if(HEXA<(radix)) radix = (HEXA);

base = base/(radix);
if(!base) return(0x01);

return(1+(col_uw(radix, base)));
}
