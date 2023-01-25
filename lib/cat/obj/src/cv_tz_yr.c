/* **** Notes

Convert
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_yr(signed(arg),time_t(*argp))) {
auto signed char *b;
auto struct tm *tp;
auto signed yr;
auto signed hr;
auto signed mn;
auto signed sm;
auto time_t t;
auto time_t e;
auto signed char *minus = ("-");
auto signed char *plus = ("+");
auto signed epoch = (1900);
auto time_t day = (24*(60*(60)));
if(!argp) return(0x00);
// time(&t);
t = (*argp);
tp = gmtime(&t);
if(!tp) return(0x00);
yr = (epoch+(R(tm_year,*tp)));
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));
sm = (R(tm_sec,*tp));
e = (t);
if(arg) e = (e+(30*(60*(arg))));
tp = localtime(&e);
if(DBG) {
t = (t+(CAT_DEBUG_MN+(CAT_DEBUG_HR)));
tp = gmtime(&t);
}
if(!tp) return(0x00);
b = (0x00);
if(!(EQ(yr,epoch+(R(tm_year,*tp))))) {
t = (sm+(60*(mn+(60*(hr)))));
e = (60*(R(tm_hour,*tp)));
e = (60*(e+(R(tm_min,*tp))));
e = (e+(R(tm_sec,*tp)));
if(yr<(epoch+(R(tm_year,*tp)))) {
b = (plus);
e = (day+(e));
t = (e+(0x01+(~t)));
}
else {
b = (minus);
t = (day+(t));
t = (t+(0x01+(~e)));
}
return(cv_tz_r(arg,b,&t));
}
return(cv_tz_mo(arg,&t));
}
