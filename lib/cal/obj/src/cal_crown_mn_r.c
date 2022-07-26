/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mn_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short mn;
auto time_t t;
if(!argp) return(~0x00);
t = (0x00);
if(arg) t = (arg*(60));
t = (t+(*argp));
tp = localtime(&t);
if(!tp) return(~0x00);
mn = (R(tm_min,*tp));
if(!(EQ(arg,mn))) t = (0x00);
*argp = (t);
return(arg);
}
