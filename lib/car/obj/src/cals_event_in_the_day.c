/* **** Notes

Confirm.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_event_in_the_day(time_t(arg),cals_event_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;

if(!argp) return(0x00);

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));

t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);

if(yr^(1900+(R(tm_year,*tp)))) return(0x00);
if(mo^(R(tm_mon,*tp))) return(0x00);
if(di^(R(tm_mday,*tp))) return(0x00);
// if(wk^(R(tm_wday,*tp))) return(0x00);

return(0x01);
}
