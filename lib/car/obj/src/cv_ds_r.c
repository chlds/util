/* **** Notes

Convert into an array of double words out of data type size_t.

Remarks:
Refer at fn. cv_sd_r.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_ds_r(signed(*di),size_t(si))) {

auto signed *d;
auto signed r;
auto signed short flag;
auto size_t s;
auto signed mask = (0x7FFFFFFF);
auto signed lim = (1000); // in about 2TB i.e., 1000(2GB)

if(!di) return(0x00);
// if(!si) return(0x00);

s = (si);
AND(r,0x00);
NOT(r);
AND(r,mask);
s = (s+(0x01+(~r)));
if(!(s<(si))) {
*di = (si);
return(0x01);
}

INC(*(0x01+(di)));
r = (*(0x01+(di)));
if(r<(0x00)) return(0x00);
if(!(r<(lim))) return(0x00);

si = (s);

return(0x01+(cv_ds_r(di,si)));
}
