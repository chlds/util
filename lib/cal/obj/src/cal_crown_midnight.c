/* **** Notes

Overwrite time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_midnight(time_t(*argp))) {
auto struct tm *tp;
auto signed short hr,mn,sm;
auto time_t t;
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(!tp) return(0x00);
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));
t = (t+(0x01+(~(sm+(60*(mn+(60*(hr))))))));
*argp = (t);
return(0x01);
}
