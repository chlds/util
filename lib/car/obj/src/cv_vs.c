/* **** Notes

Convert into an array of double words out of data type size_t.

Remarks:
Call fn. rl later.
Refer at fn. cv_sv.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_vs(signed(**di),size_t(*si))) {

auto signed *d;
auto signed i,r;
auto signed short flag;
auto size_t s;
auto signed lim = (1000); // in about 2TB i.e., (1000*(2GB

if(!di) return(0x00);
if(!si) return(0x00);
if(*di) return(0x00);

s = (*si);
// if(!s) return(0x00);

i = (0x01+(0x02));
r = (i*(sizeof(**di)));
d = (signed*) alloc(r);
*di = (d);
if(!d) return(0x00);

while(i) *(--i+(d)) = (0x00);
i = (lim);
r = cv_vs_r(i,d,&s);

return(r);
}
