/* **** Notes

Count bytes back.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_back_r(signed(*retv),signed char(*argp))) {

auto signed r;

if(!retv) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = nbytechar(*argp);
if(!r) return(0x00);

if(0x80^(r)) {
OR(*retv,r);
return(0x01);
}

return(0x01+(ct_back_r(retv,--argp)));
}
