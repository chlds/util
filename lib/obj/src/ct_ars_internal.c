/* **** Notes

Count the arguments.

Remarks:
Using along with fn. ct_ars.
//*/


# include "../../../incl/config.h"

signed(__cdecl ct_ars_internal(signed short(flag), signed(*retv), signed char(*base))) {

/* **** DATA */
auto signed char const(WS) = (' ');

/* **** CODE/TEXT */
// if(flag) return(0x00);
if(!retv) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(WS^(*(base)))) {
XOR(flag, flag);
}

else {
if(!flag) {
OR(flag, 0x01);
*retv = (1+(*retv));
}}

base++;
return(1+(ct_ars_internal(flag, retv, base)));
}
