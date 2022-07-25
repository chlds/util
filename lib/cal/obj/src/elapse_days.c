/* **** Notes

Return days elapsed since a first day of the week

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl elapse_days(signed short(wk),time_t(arg))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed short sun = (0x00);
auto signed short mon = (0x01);
auto signed short sat = (0x06);
if(arg<(0x00)) return(~0x00);
if(sat<(wk)) wk = (mon);
if(wk<(sun)) wk = (mon);
t = (arg);
r = elapse_days_r(wk,&t);
if(EQ(t,~0x00)) return(~0x00);
return(r);
}
