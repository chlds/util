/* **** Notes

Cache and update the time.

Remarks:
Refer at fn. cals_cache_day_events and fn. cals_merge_rolls.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_periodic_events_in_the_day(time_t(arg),cals_roll_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;
auto signed short periodic;

if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_init_roll(cache);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_roll()");
return(0x00);
}

ev = (*(CLI_LEAD+(R(event,*argp))));

return(cals_cache_periodic_events_in_the_day_r(arg,cache,ev));
}
