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
auto signed i,r;
auto signed short flag;
auto size_t s;

if(!di) return(0x00);
// if(!si) return(0x00);

s = (si);
AND(r,0x00);
NOT(r);
i = bpb();
i = (i*(sizeof(*di)));
DEC(i);
SHL(r,i);
NOT(r);
s = (s+(0x01+(~r)));
if(!(s<(si))) {
*di = (si);
return(0x01);
}

si = (s);
if(!(cv_ds_rr(di))) return(0x00);

return(0x01+(cv_ds_r(di,si)));
}
