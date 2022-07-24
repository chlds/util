/* **** Notes

By

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_by_wk(signed short(wk),time_t(arg))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed days = (0x07);
if(!(wk<(days))) return(~0x00);
if(wk<(0x00)) return(~0x00);
if(arg<(0x00)) return(~0x00);
t = (arg);
tp = localtime(&t);
if(!tp) return(~0x00);
r = (signed) (R(tm_wday,*tp));
r = (wk+(0x01+(~r)));
r = (days+(r));
r = (r%(days));
return(r);
}
