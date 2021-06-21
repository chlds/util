/* **** Notes

Retrieve seconds of a first week of the first month.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl find_a_first_month_internal(signed short(flag),signed short(mon),time_t(*di),time_t(si))) {

auto struct tm *tp;
auto time_t t;
auto signed curr_mo;
auto signed mo,wk;
auto signed i,r;

if(!di) return(0x00);
if(si<(0x00)) return(0x00);
if(mon<(JANUARY)) mon = (JANUARY);
if(DECEMBER<(mon)) mon = (JANUARY);

r = (60);
r = (60*(r));
r = (24*(r));
wk = (7*(r));
if(0x02&(flag)) {
*di = (wk+(si));
return(0x00);
}

si = (si+(0x01+(~wk)));
t = (si);
tp = localtime(&t);
if(!tp) return(0x00);

mo = (R(tm_mon,*tp));
if(!(mon^(mo))) OR(flag,0x01);
if(flag) {
if(mon^(mo)) OR(flag,0x02);
}

return(0x01+(find_a_first_month_internal(flag,mon,di,si)));
}
