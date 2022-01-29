/* **** Notes

Subtract to retrieve the remainder and number of carry-overs.

Remarks:
Refer at fn. cv_ds and fn. cv_sd.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl sub_dd_r(signed(*retv/* remainder */),signed(arg/* column-base for di */),signed(*di),signed(si))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!retv) return(0x00);
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(si<(0x01)) return(0x00);

r = (*di);
r = (r+(0x01+(~si)));
if(r<(0x01)) {
if(!(*(0x01+(di)))) {
*retv = (*di);
return(0x00);
}
DEC(*(0x01+(di)));
r = (r+(arg));
}

*di = (r);

return(0x01+(sub_dd_r(retv,arg,di,si)));
}
