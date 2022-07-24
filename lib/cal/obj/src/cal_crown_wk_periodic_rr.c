/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_periodic_rr(signed(ordinary),signed short(arg),time_t(*argp))) {
auto signed r;
r = cal_crown_wk(arg,argp);
if(EQ(r,~0x00)) {
*argp = (0x00);
return(0x00);
}
return(r+(cal_crown_wk_periodic_rrr(ordinary,arg,argp)));
}
