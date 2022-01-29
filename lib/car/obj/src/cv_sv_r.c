/* **** Notes

Convert into a size_t out of an array of pointers for characters.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sv_r(signed short(radix),size_t(*di),signed char(**si))) {

auto signed r;
auto signed short flag;
auto size_t s;
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(radix<(bina)) radix = (deci);
if(hexa<(radix)) radix = (deci);

AND(s,0x00);
r = cv_sa_xe(radix,&s,*si);
if(r) {
AND(r,0x00);
OR(r,0x01);
}

ADD(*di,s);
si++;

return(r+(cv_sv_r(radix,di,si)));
}
