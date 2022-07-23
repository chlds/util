/* **** Notes

Overwrite time

Remarks:
Keep running
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_hr(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short hr;
auto time_t t;
if(!(arg<(24))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
hr = (R(tm_hour,*tp));
if(hr) {
t = (hr*(60*(60)));
t = (0x01+(~t));
t = (t+(*argp));
}
*argp = (t);
return(cal_crown_hr_r(arg,argp));
}
