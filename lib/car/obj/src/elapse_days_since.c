/* **** Notes

Return days elapsed since a first day of the week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR

# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl elapse_days_since(signed short(wk),time_t(arg))) {

/* **** DATA, BSS and STACK */
auto signed short SATURDAY = (0x06);
auto signed short SUNDAY = (0x00);
// auto signed WEEK = (0x07);

auto struct tm *tp;
auto time_t t;
auto signed d,h;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

if(!(wk^(R(tm_wday,*tp)))) return(0x00);

// search back
h = (60*(60));
d = (24*(h));
r = (0x01+(~d));
ADD(arg,r);

return(0x01+(elapse_days_since(wk,arg)));
}
