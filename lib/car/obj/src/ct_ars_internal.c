/* **** Notes

Count arguments to the terminating null character.

Remarks:
Refer at fn. ct_ars2.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_ars_internal(signed short(flag),signed(*retv),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(SP^(*base)) {
if(!flag) {
OR(flag,0x01);
INC(*retv);
}}
else AND(flag,0x00);

base++;

return(0x01+(ct_ars_internal(flag,retv,base)));
}
