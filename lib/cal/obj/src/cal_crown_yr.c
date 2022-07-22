/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_yr(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short yr;
auto time_t t;
auto signed short ad_h = (2100);
auto signed short ad_l = (1970);
if(!(arg<(ad_h))) arg = (ad_h);
if(arg<(ad_l)) arg = (ad_l);
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
yr = (1900+(R(tm_year,*tp)));
yr = (arg+(0x01+(~yr)));
return(cal_crown_yr_r(yr,argp));
}
