# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_mo(time_t(arg))) {
auto struct tm *t;
auto time_t te;
auto signed mo;
auto THDR_T f;
if(arg<(0x00)) return(0x00);
te = (arg);
f = cvte_time();
if(!f) return(0x00);
t = f(&te);
if(!t) return(0x00);
mo = (R(tm_mon,*t));
arg = cvte_mo_r(arg,mo);
if(arg<(0x00)) return(0x00);
return(arg);
}
