/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_periodic_r(signed(ordinary),signed short(arg),time_t(*argp))) {
auto signed r;
if(!argp) return(~0x00);
r = cal_crown_day_one(argp);
if(!r) {
*argp = (0x00);
return(0x00);
}
return(cal_crown_wk_periodic_rr(ordinary,arg,argp));
}
