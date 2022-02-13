/* **** Notes

Convert into data type size_t out of an array of double words.

Remarks:
Refer at fn. cv_ds_r.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sd_r(size_t(*di),signed(*si),signed(arg))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto size_t s;

if(!di) return(0x00);
if(!si) return(0x00);
if(arg<(0x00)) return(0x00);
if(!(arg<(OBJS))) return(0x00);

AND(r,0x00);
NOT(r);
i = bpb();
i = (i*(sizeof(*si)));
DEC(i);
SHL(r,i);
NOT(r);
if(!(carry_over(&s,r,arg))) return(0x00);

r = (*(arg+(si)));
s = (r*(s));
ADD(*di,s);
arg++;

return(0x01+(cv_sd_r(di,si,arg)));
}
