/* **** Notes

Overwrite time

Remarks:
Keep running
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown(signed short(mo),signed short(yr),time_t(*argp))) {
auto time_t t;
if(!argp) return(0x00);
*argp = (0x00);
if(!(0x01+(cal_crown_yr(yr,argp)))) return(0x00);
if(!(0x01+(cal_crown_mo(mo,argp)))) return(0x00);
// if(!(cal_crown_day_one(argp))) return(0x00);
if(!(cal_crown_midnight(argp))) return(0x00);
t = (*argp);
if(t<(0x00)) {
*argp = (0x00);
// return(0x00);
}
return(0x01);
}
