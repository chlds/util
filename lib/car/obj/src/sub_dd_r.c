/* **** Notes

Subtract to retrieve the remainder and number of carry-overs.

Remarks:
Refer at fn. cv_ds and fn. cv_sd.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl sub_dd_r(signed(*retv/* remainder */),signed(subtrahend),signed(arg/* column-base for argp */),signed(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!retv) return(0x00);
if(subtrahend<(0x01)) return(0x00);
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

r = (*argp);
r = (r+(0x01+(~subtrahend)));
if(r<(0x01)) {
if(!(*(0x01+(argp)))) {
*retv = (*argp);
return(0x00);
}
DEC(*(0x01+(argp)));
r = (r+(arg));
}

*argp = (r);

return(0x01+(sub_dd_r(retv,subtrahend,arg,argp)));
}
