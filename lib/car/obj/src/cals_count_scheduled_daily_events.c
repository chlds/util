/* **** Notes

Count periodic events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_daily_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t,tt;
auto signed i,r;
auto signed short year,mon,day;
auto signed short yr,mo,di;
auto signed short flag;

if(!cache) return(0x00);
if(!term) return(0x00);
if(!argp) return(0x00);

t = (R(t,*argp));
tt = (R(t,*term));
tt = (tt+(6*(24*(60*(60)))));
i = (DAYS);
while(i) {
AND(r,0x00);
if(t<(tt)) OR(r,0x01);
if(!r) {
if(cals_event_in_the_day(tt,argp)) OR(r,0x01);
}
if(!r) break;
if(!(CALS_INVALID&(R(flag,*argp)))) INC(*cache);
tt = (tt+(0x01+(~(24*(60*(60))))));
--i;
}

return(0x01);
}
