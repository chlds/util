/* **** Notes

Count events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_events(signed(*cache),time_t(arg),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;
auto cals_event_t term;
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

*cache = (0x00);
t = (arg);
R(t,term) = (t);
tp = localtime(&t);
if(!tp) return(0x00);
*(CALS_YR+(R(date,term))) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(R(date,term))) = (R(tm_mon,*tp));
*(CALS_DI+(R(date,term))) = (R(tm_mday,*tp));
*(CALS_WK+(R(date,term))) = (R(tm_wday,*tp));
*(CALS_HR+(R(time,term))) = (R(tm_hour,*tp));
*(CALS_MN+(R(time,term))) = (R(tm_min,*tp));
*(CALS_SM+(R(time,term))) = (R(tm_sec,*tp));
AND(R(flag,term),0x00);
OR(R(flag,term),CALS_ERROR);
event = (*(CLI_LEAD+(R(event,*argp))));

r = cals_count_scheduled_events_r(cache,&term,event);

event = (0x00);

if(CALS_ERROR&(R(flag,term))) return(0x00);

return(r);
}
