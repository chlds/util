/* **** Notes

Cache and update the time.

Remarks:
Refer at fn. cals_cache_day_events and fn. cals_merge_rolls.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_periodic_events_in_the_day_r(time_t(arg),cals_roll_t(*cache),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;
auto signed short periodic;

if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INVALID&(R(flag,*argp)))) {
r = cals_periodic_event_in_the_day(arg,argp);
if(r) {
r = cals_cache_events(argp,cache);
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_events()");
return(0x00);
}
// overwrite the time after caching events
ev = (*(CLI_INDEX+(R(event,*cache))));
r = cals_update_time_for_periodic_events_in_the_day(arg,ev);
if(!r) {
printf("%s \n","<< Error at fn. cals_update_time_for_periodic_events_in_the_day()");
return(0x00);
}}}

argp = (R(s,*argp));

return(0x01+(cals_cache_periodic_events_in_the_day_r(arg,cache,argp)));
}
