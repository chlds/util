/* **** Notes

Overwrite time

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_yr(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed short ad_h = (2100);
auto signed short ad_l = (1970);
if(!argp) return(~0x00);
if(!(arg<(ad_h))) arg = (ad_h);
if(arg<(ad_l)) arg = (ad_l);
t = (0x00);
r = cal_crown_yr_r(arg,&t);
if(EQ(r,~0x00)) return(r);
if(EQ(t,~0x00)) return(~0x00);
*argp = (t);
return(r);
}
