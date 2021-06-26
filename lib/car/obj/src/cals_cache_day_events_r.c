/* **** Notes

Cache events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_day_events_r(signed short(flag),time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto time_t t;
auto signed i,r;

if(!argp) return(0x00);

if(!cache) OR(flag,0x02);

if(*(CLI_LEAD+(R(event,*argp)))) {
if(!flag) OR(flag,0x02);
}

if(0x02&(flag)) {
flag = (~CALS_ERROR);
AND(R(flag,*argp),flag);
return(0x00);
}

AND(flag,0x00);
if(CALS_INVALID&(R(flag,*cache))) flag++;
if(!flag) {
if(cals_event_in_the_day(criterion,cache)) {
OR(flag,0x01);
r = cals_cache_events(cache,argp);
if(!r) return(0x00);
}}

cache = (R(s,*cache));

return(0x01+(cals_cache_day_events_r(flag,criterion,cache,argp)));
}
