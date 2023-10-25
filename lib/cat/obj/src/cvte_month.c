# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_month(time_t(arg))) {
auto struct tm *t;
auto time_t te;
auto signed mo;
if(arg<(0x00)) return(0x00);
te = (arg);
t = localtime(&te);
if(DBG) t = gmtime(&te);
if(!t) return(0x00);
mo = (R(tm_mon,*t));
arg = cvte_month_r(arg,mo);
if(arg<(0x00)) return(0x00);
return(arg);
}
