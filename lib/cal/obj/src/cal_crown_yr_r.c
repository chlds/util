/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_yr_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short yr;
auto time_t t;
auto signed weeks = (53);
auto signed days = (7);
if(!argp) return(~0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) {
*argp = (~0x00);
return(0x00);
}
yr = (1900+(R(tm_year,*tp)));
if(EQ(arg,yr)) {
*argp = (t);
return(0x00);
}
t = (weeks*(days*(24*(60*(60)))));
*argp = (t+(*argp));
if(!(cal_crown_day_one(argp))) {
*argp = (~0x00);
return(0x00);
}
return(0x01+(cal_crown_yr_r(arg,argp)));
}
