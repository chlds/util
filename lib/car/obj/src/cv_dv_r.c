/* **** Notes

Convert into a signed double word out of an array of pointers for characters.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_dv_r(signed short(radix),signed(*di),signed char(**si))) {
auto signed i,r;
auto signed short flag;
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);
AND(i,0x00);
r = cv_da_xe(radix,&i,*si);
if(r) {
AND(r,0x00);
OR(r,0x01);
}
ADD(*di,i);
si++;
return(r+(cv_dv_r(radix,di,si)));
}
