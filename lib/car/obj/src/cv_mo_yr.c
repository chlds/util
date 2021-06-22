/* **** Notes

Convert into seconds of a first week of the first month.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo_yr(signed short(mon),time_t(*di),time_t(si))) {

auto struct tm *tp;
auto time_t t;
auto signed curr_mo;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(si<(0x00)) return(0x00);
if(mon<(JANUARY)) mon = (JANUARY);
if(DECEMBER<(mon)) mon = (JANUARY);

*di = (0x00);
t = (si);
tp = localtime(&t);
if(!tp) return(0x00);

AND(flag,0x00);
curr_mo = (R(tm_mon,*tp));
if(!(mon^(curr_mo))) OR(flag,0x01);

return(cv_mo_yr_r(flag,mon,di,si));
}
