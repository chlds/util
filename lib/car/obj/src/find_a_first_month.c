/* **** Notes

Retrieve seconds of a first week of the first month.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR

# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl find_a_first_month(signed short(mon),time_t(*argp),time_t(arg))) {

/* **** DATA, BSS and STACK */
auto signed short DECEMBER = (0x0B);
auto signed short JANUARY = (0x00);
auto signed MONTH = (0x0C);

auto struct tm *tp;
auto time_t t;
auto signed curr_m;
auto signed d,h;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(arg<(0x00)) return(0x00);
if(mon<(JANUARY)) mon = (JANUARY);
if(DECEMBER<(mon)) mon = (JANUARY);

*argp = (0x00);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

flag = (0x00);
curr_m = (R(tm_mon,*tp));
if(!(DECEMBER^(curr_m))) OR(flag,FIRST_B);

r = find_a_first_month_internal(flag,mon,curr_m,argp,arg);

return(r);
}
