/* **** Notes

Convert to time out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_time(signed char(*b),cals_event_t(*argp))) {

auto signed i,r;
auto signed short flag;

if(!b) return(0x00);
if(!argp) return(0x00);

// init.
i = (CALS_TIME);
while(i) *(--i+(R(time,*argp))) = (0x00);

r = cv_hr(CALS_HR+(R(time,*argp)),CALS_MN+(R(time,*argp)),b);
if(!r) {
i = (CALS_TIME);
while(i) *(--i+(R(time,*argp))) = (0x00);
}

return(r);
}
