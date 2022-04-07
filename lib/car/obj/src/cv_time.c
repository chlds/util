/* **** Notes

Convert to time out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_time(signed char(*b),cals_event_t(*argp))) {

auto signed r;
auto signed short hr;
auto signed short mn;
auto signed short flag;

if(!b) return(0x00);
if(!argp) return(0x00);

// init.
r = (CALS_TIME);
while(r) *(--r+(R(time,*argp))) = (0x00);

r = cv_at(&hr,&mn,b);
*(CALS_MN+(R(time,*argp))) = (mn);
*(CALS_HR+(R(time,*argp))) = (hr);
if(!r) {
r = (CALS_TIME);
while(r) *(--r+(R(time,*argp))) = (0x00);
}

return(r);
}
