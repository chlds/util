/* **** Notes

Convert into data type size_t out of an array of double words.

Remarks:
Refer at fn. cv_ds_r.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sd_r(size_t(*di),signed(si))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t s;
auto signed mask = (0x7FFFFFFF);

if(!di) return(0x00);
if(!si) return(0x00);

AND(r,0x00);
NOT(r);
AND(r,mask);
ADD(*di,r);
--si;

return(0x01+(cv_sd_r(di,si)));
}
