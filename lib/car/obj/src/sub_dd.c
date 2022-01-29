/* **** Notes

Subtract to retrieve the remainder and number of carry-overs.

Remarks:
Return a negative value on failure.
Refer at fn. cv_ds and fn. cv_sd.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl sub_dd(signed(*retv/* remainder */),signed(arg/* column-base for di */),signed(*di),signed(si))) {

auto signed *d;
auto signed r;
auto signed short flag;

if(!retv) return(~0x00);
if(arg<(0x01)) return(~0x00);
if(!di) return(~0x00);
if(si<(0x01)) return(~0x00);

d = (0x00);
r = cat_dd(&d,*di);
if(!r) return(~0x00);

r = cat_dd(&d,*(0x01+(di)));
if(!r) {
rl(d);
return(~0x00);
}

r = sub_dd_r(retv,arg,d,si);

embed_d(0x02,d);
rl(d);
d = (0x00);

return(r);
}
