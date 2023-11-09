# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_di(time_t(arg))) {
auto struct tm *t;
auto time_t te;
auto time_t di;
auto time_t day = (60*(60*(24)));
auto thdr_t f;
if(arg<(0x00)) return(0x00);
te = (arg);
f = cvte_time();
if(!f) return(0x00);
t = f(&te);
if(!t) return(0x00);
di = (time_t)(R(tm_mday,*t));
--di;
if(!(0x00<(di))) return(arg);
arg = (arg+(0x01+(~(day*(di)))));
if(arg<(0x00)) return(0x00);
return(arg);
}
