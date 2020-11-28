/* **** Notes

Cache events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_day_events_r(signed short(flag),cals_event_t(*criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;

// auto cals_roll_t roll;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;

/* **** CODE/TEXT */
if(!criterion) return(0x00);
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

yr = (*(CALS_YR+(R(date,*criterion))));
mo = (*(CALS_MO+(R(date,*criterion))));
di = (*(CALS_DI+(R(date,*criterion))));

AND(flag,0x00);
if(!(yr^(*(CALS_YR+(R(date,*cache)))))) {
if(!(mo^(*(CALS_MO+(R(date,*cache)))))) {
if(!(di^(*(CALS_DI+(R(date,*cache)))))) {
OR(flag,0x01);
r = cals_cache_events(cache,argp);
if(!r) return(0x00);
}}}

cache = (R(s,*cache));

return(0x01+(cals_cache_day_events_r(flag,criterion,cache,argp)));
}
