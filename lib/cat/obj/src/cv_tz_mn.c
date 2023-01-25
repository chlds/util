/* **** Notes

Convert
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_mn(signed(arg),time_t(*argp))) {
auto signed char *b;
auto struct tm *tp;
auto signed mn;
auto signed sm;
auto time_t t;
auto time_t e;
auto signed char *minus = ("-");
auto signed char *plus = ("+");
if(!argp) return(0x00);
// time(&t);
t = (*argp);
tp = gmtime(&t);
if(!tp) return(0x00);
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
if(!(EQ(mn,R(tm_min,*tp)))) {
t = (sm+(60*(mn)));
e = (60*(R(tm_min,*tp)));
e = (e+(R(tm_sec,*tp)));
if(mn<(R(tm_min,*tp))) {
b = (plus);
t = (e+(0x01+(~t)));
}
else {
b = (minus);
t = (t+(0x01+(~e)));
}}
return(cv_tz_r(arg,b,&t));
}
