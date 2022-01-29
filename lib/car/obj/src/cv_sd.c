/* **** Notes

Convert into data type size_t out of an array of double words.

Remarks:
Refer at fn. cv_ds.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sd(size_t(*di),signed(*si))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t s;

if(!di) return(0x00);
if(!si) return(0x00);

AND(*di,0x00);
r = (*(0x01+(si)));
if(r<(0x00)) return(0x00);

r = cv_sd_r(di,r);
s = (*si);
ADD(*di,s);
r++;

return(r);
}
