/* **** Notes

Count arguments to the terminating null character

Remarks:
Refer at fn. ct_ars2.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_ars_r(signed short(flag),signed(*retv),signed char(*base))) {
auto signed r;
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
return(0x01+(ct_ars_r(flag,retv,base)));
}
