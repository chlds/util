/* **** Notes

Return days elapsed since a first day of the week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl elapse_days_since(signed short(wk),time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

if(!(wk^(R(tm_wday,*tp)))) return(0x00);

// search back
r = (60);
r = (60*(r));
r = (24*(r));
r = (0x01+(~r));
ADD(arg,r);

return(0x01+(elapse_days_since(wk,arg)));
}
