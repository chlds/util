/* **** Notes

Retrieve seconds of a first day of the first week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR

# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl find_a_first_week(signed short(wk),time_t(*argp),time_t(arg))) {

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
if(wk<(SUNDAY)) wk = (SUNDAY);
if(SATURDAY<(wk)) wk = (SUNDAY);

*argp = (0x00);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

curr_d = (R(tm_mday,*tp));

r = find_a_first_week_internal(wk,curr_d,argp,arg);

return(r);
}
