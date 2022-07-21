/* **** Notes

Output
*/


# define CAL_H
# define TIME_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cal_out_time(time_t(arg))) {
auto struct tm *tp;
auto time_t t;
auto signed short sm,mn,hr;
auto signed short wk,di,mo,yr;
auto signed char *(cal_wk[]) = {
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",0x00,
};
auto signed char *(cal_mo[]) = {
"January","February","March","April","May","June","July","August","September","October","November","December",0x00,
};
t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);
yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));
printf("%2d:%02d:%02d ",hr,mn,sm);
printf("%s %d %s %d",*(cal_wk+(wk)),di,*(cal_mo+(mo)),yr);
return(0x01);
}
