/* **** Notes

Overwrite time

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mn(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed r;
auto signed short mn;
auto time_t t;
if(!(arg<(60))) return(~0x00);
if(arg<(0x00)) return(~0x00);
if(!argp) return(~0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(~0x00);
mn = (R(tm_min,*tp));
if(mn) {
t = (mn*(60));
t = (0x01+(~t));
t = (t+(*argp));
}
r = cal_crown_mn_r(arg,&t);
if(EQ(r,~0x00)) return(r);
*argp = (t);
return(r);
}
