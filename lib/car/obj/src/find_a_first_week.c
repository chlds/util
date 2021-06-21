/* **** Notes

Retrieve seconds of a first day of the first week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl find_a_first_week(signed short(wk),time_t(*di),time_t(si))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short curr_mo;
auto signed short flag;

if(!di) return(0x00);
if(si<(0x00)) return(0x00);
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

*di = (0x00);
t = (si);
tp = localtime(&t);
if(!tp) return(0x00);

curr_mo = (R(tm_mon,*tp));

return(find_a_first_week_internal(wk,curr_mo,di,si));
}
