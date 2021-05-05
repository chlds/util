/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si))) {

auto signed i,r;
auto signed short flag;

if(!hr) return(0x00);
if(!mn) return(0x00);
if(!si) return(0x00);

r = cv_hr_r(hr,mn,si);
if(!r) {
AND(*hr,0x00);
AND(*mn,0x00);
}

return(r);
}
