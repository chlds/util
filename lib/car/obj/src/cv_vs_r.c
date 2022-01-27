/* **** Notes

Convert into an array of double words out of data type size_t.

Remarks:
Refer at fn. cv_sv_r.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_vs_r(signed(arg),signed(*di),size_t(*si))) {

auto signed *d;
auto signed r;
auto signed short flag;
auto size_t s;
auto signed mask = (0x7FFFFFFF);

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

s = (*si);
// if(!s) return(0x00);

AND(r,0x00);
NOT(r);
AND(r,mask);
s = (s+(0x01+(~r)));
if(!(s<(*si))) {
*di = (*si);
return(0x01);
}

INC(*(0x01+(di)));
*si = (s);

return(0x01+(cv_vs_r(--arg,di,si)));
}
