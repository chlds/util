/* **** Notes

Difference with Greenwich Mean Time
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_diff_gmt(time_t(*di),time_t(si))) {
auto struct tm *tp;
auto signed short flag;
auto signed short yr,mo,day;
auto signed short hr,mn,sm;
auto time_t g;
auto time_t t;
auto time_t d = (24*(60*(60)));
if(!di) return(0x00);
if(si<(0x00)) return(0x00);
t = (si);
tp = localtime(&t);
if(!tp) return(0x00);
sm = (R(tm_sec,*tp));
mn = (R(tm_min,*tp));
hr = (R(tm_hour,*tp));
day = (R(tm_mday,*tp));
mo = (R(tm_mon,*tp));
yr = (1900+(R(tm_year,*tp)));
t = (sm+(60*(mn+(60*(hr)))));
g = (si);
tp = gmtime(&g);
if(!tp) return(0x00);
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));
g = (sm+(60*(mn+(60*(hr)))));
if(EQ(t,g)) {
t = (0x00);
*di = (t);
return(0x01);
}
AND(flag,0x00);
yr = (yr+(0x01+(~(1900+(R(tm_year,*tp))))));
if(yr) {
if(yr<(0x00)) d = (0x01+(~d));
t = (d+(t+(0x01+(~g))));
*di = (t);
return(0x01);
}
mo = (mo+(0x01+(~(R(tm_mon,*tp)))));
if(mo) {
if(mo<(0x00)) d = (0x01+(~d));
t = (d+(t+(0x01+(~g))));
*di = (t);
return(0x01);
}
day = (day+(0x01+(~(R(tm_mday,*tp)))));
if(day) {
if(day<(0x00)) d = (0x01+(~d));
t = (d+(t+(0x01+(~g))));
*di = (t);
return(0x01);
}
t = (t+(0x01+(~g)));
*di = (t);
t = (0x00);
return(0x01);
}
