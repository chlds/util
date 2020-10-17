/* **** Notes

Retrieve seconds of a first day of the first week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR

# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl find_a_first_week_internal(signed short(wk),signed short(current_day),time_t(*argp),time_t(arg))) {

/* **** DATA, BSS and STACK */
auto signed short SATURDAY = (0x06);
auto signed short SUNDAY = (0x00);
auto signed WEEK = (0x07);

auto struct tm *tp;
auto time_t t;
auto signed curr_d;
auto signed d,h;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(arg<(0x00)) return(0x00);
if(current_day<(0x00)) return(0x00);
if(31<(current_day)) return(0x00);
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

h = (60*(60));
d = (24*(h));

// search back
r = elapse_days_since(wk,arg);
if(!r) ADD(arg,0x01+(~(WEEK*(d))));
else ADD(arg,0x01+(~(r*(d))));

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);
if(current_day<(R(tm_mday,*tp))) {
*argp = (arg+(WEEK*(d)));
return(0x01);
}

return(0x01+(find_a_first_week_internal(wk,current_day,argp,arg)));
}
