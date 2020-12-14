/* **** Notes

Refer
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rf_leap_years(signed short(arg))) {

auto signed i,r;

if(arg<(0x00)) arg = (0x01+(~arg));

r = (arg%(4));
if(r) return(0x00);

r = (arg%(100));
if(!r) {
r = (arg%(400));
if(r) return(0x00);
}

return(0x01);
}
