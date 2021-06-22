/* **** Notes

Convert into seconds of a first day of the first week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_wk_mo_r(signed short(wk),signed short(current_month),time_t(*di),time_t(si))) {

auto struct tm *tp;
auto time_t t;
auto signed d,r;
auto signed short flag;

if(!di) return(0x00);
if(si<(0x00)) return(0x00);
if(current_month<(0x00)) return(0x00);
if(11<(current_month)) return(0x00);
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

r = (60);
r = (60*(r));
d = (24*(r));

t = (si);
tp = localtime(&t);
if(!tp) return(0x00);

if(current_month^(R(tm_mon,*tp))) {
*di = (si+(DAYS*(d)));
return(0x00);
}

// search back
r = elapse_days_since(wk,si);
if(!r) r = (DAYS);
ADD(si,0x01+(~(r*(d))));

return(0x01+(cv_wk_mo_r(wk,current_month,di,si)));
}
