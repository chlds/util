/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_update_time_for_periodic_events_in_the_day(time_t(arg),cals_event_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short yr,mo,di,wk;
auto signed short hr,mn,sm;
auto signed short flag;

if(!argp) return(0x00);

t = (arg);
r = cals_crown_midnight(&t);
if(!r) return(0x00);

yr = (*(CALS_YR+(R(date,*argp))));
mo = (*(CALS_MO+(R(date,*argp))));
di = (*(CALS_DI+(R(date,*argp))));
wk = (*(CALS_WK+(R(date,*argp))));
hr = (*(CALS_HR+(R(time,*argp))));
mn = (*(CALS_MN+(R(time,*argp))));
sm = (*(CALS_SM+(R(time,*argp))));

t = (t+(sm+(60*(mn+(60*(hr))))));
R(t,*argp) = (t);

return(0x01);
}
