/* **** Notes

Convert into an array of double words out of data type size_t.

Remarks:
Call fn. rl later.
Refer at fn. cv_sd.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_ds(signed(**di),size_t(si))) {

auto signed *d;
auto signed r;
auto signed short flag;
auto size_t s;

if(!di) return(0x00);
if(*di) return(0x00);
// if(!si) return(0x00);

r = (OBJS);
r = (r*(sizeof(**di)));
d = (signed*) alloc(r);
*di = (d);
if(!d) return(0x00);

r = (OBJS);
while(r) *(--r+(d)) = (0x00);
r = cv_ds_r(d,si);

return(r);
}
