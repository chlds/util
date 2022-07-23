/* **** Notes

Overwrite time

Remarks:
Keep running
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_hr_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short hr;
auto time_t t;
if(!argp) return(0x00);
t = (0x00);
if(arg) t = (arg*(60*(60)));
t = (t+(*argp));
tp = localtime(&t);
if(!tp) return(0x00);
hr = (R(tm_hour,*tp));
if(!(EQ(arg,hr))) {
t = (0x00);
// return(0x00);
}
*argp = (t);
return(0x01);
}
