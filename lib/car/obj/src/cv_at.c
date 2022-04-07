/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_at(signed short(*hr),signed short(*mn),signed char(*argp))) {

auto signed char *b;
auto signed r;

if(!hr) return(0x00);
if(!mn) return(0x00);
if(!argp) return(0x00);

b = (argp);
r = cv_hr(hr,mn,b);
if(!r) {
AND(*mn,0x00);
r = cv_hr_light(hr,b);
}

b = (0x00);

return(r);
}
