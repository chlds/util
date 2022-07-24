/* **** Notes

By

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_by_mo(signed short(mo),time_t(arg))) {
auto struct tm *tp;
auto signed r;
auto time_t t;
auto signed months = (0x0C);
if(!(mo<(months))) return(~0x00);
if(mo<(0x00)) return(~0x00);
if(arg<(0x00)) return(~0x00);
t = (arg);
tp = localtime(&t);
if(!tp) return(~0x00);
r = (signed) (R(tm_mon,*tp));
r = (mo+(0x01+(~r)));
r = (months+(r));
r = (r%(months));
return(r);
}
