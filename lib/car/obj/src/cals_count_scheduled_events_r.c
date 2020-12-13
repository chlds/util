/* **** Notes

Count events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_events_r(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short year,mon,day;
auto signed short yr,mo,di;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!term) return(0x00);
if(!argp) {
flag = (~CALS_ERROR);
AND(R(flag,*term),flag);
return(0x00);
}

if(CALS_PERIODIC&(R(flag,*argp))) {
r = cals_count_scheduled_periodic_events(cache,term,argp);
if(!r) return(0x00);
}
else {
r = cals_count_scheduled_events_internal(cache,term,argp);
if(!r) return(0x00);
}

argp = (R(s,*argp));

return(0x01+(cals_count_scheduled_events_r(cache,term,argp)));
}
