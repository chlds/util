/* **** Notes

Cache events.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_cache_day_events_r(time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed(__cdecl*f)(time_t(criterion),cals_event_t(*cache));
auto signed(__cdecl*(fn[]))(time_t(criterion),cals_event_t(*cache)) = {
cals_periodic_event_in_the_day,
cals_event_in_the_day,
0x00,
};

if(!cache) return(0x00);
if(!argp) return(0x00);

AND(i,0x00);
if(!(CALS_INVALID&(R(flag,*cache)))) {
if(!(CALS_PERIODIC&(R(flag,*cache)))) OR(i,0x01);
f = (*(i+(fn)));
if(f(criterion,cache)) {
if(!(cals_cache_events(cache,argp))) return(0x00);
if(DBG) {
printf("<< Cached: ");
cals_out_e(*(CLI_INDEX+(R(event,*argp))));
printf("\n");
}
if(CALS_PERIODIC&(R(flag,*cache))) {
ev = (*(CLI_INDEX+(R(event,*argp))));
if(!(cals_update_time_for_periodic_events_in_the_day(criterion,ev))) return(0x00);
}}}

cache = (*(CLI_SI+(R(event,*cache))));

return(0x01+(cals_cache_day_events_r(criterion,cache,argp)));
}
