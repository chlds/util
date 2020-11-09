/* **** Notes

Convert to time out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_time(signed char(*b),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

// init.
i = (CALS_TIME);
while(i) *(--i+(R(time,*argp))) = (0x00);
AND(R(flag,*argp),0x00);

r = cv_hr(CALS_HR+(R(time,*argp)),CALS_MN+(R(time,*argp)),b);
if(!r) return(0x00);

return(0x01);
}
