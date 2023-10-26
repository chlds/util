# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_midnight(time_t(arg))) {
auto struct tm *t;
auto time_t te;
auto time_t hr;
auto time_t mn;
auto time_t sm;
auto THDR_T f;
if(arg<(0x00)) return(0x00);
te = (arg);
f = cvte_time();
if(!f) return(0x00);
t = f(&te);
if(!t) return(0x00);
sm = (time_t)(R(tm_sec,*t));
mn = (time_t)(R(tm_min,*t));
hr = (time_t)(R(tm_hour,*t));
arg = (arg+(0x01+(~(sm+(60*(mn+(60*(hr))))))));
if(arg<(0x00)) return(0x00);
return(arg);
}
