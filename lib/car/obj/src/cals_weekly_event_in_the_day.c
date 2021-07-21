/* **** Notes

Confirm.

Remarks:
Refer at fn. cals_periodic_event_in_the_day.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_weekly_event_in_the_day(time_t(arg),cals_event_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short day;
auto signed short flag;

if(!argp) return(0x00);

r = cals_event_in_the_day(arg,argp);
if(r) return(0x01);

t = (R(t,*argp));
if(arg<(t)) return(0x00);

tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

if(!(wk^(R(tm_wday,*tp)))) return(0x01);

return(0x00);
}
