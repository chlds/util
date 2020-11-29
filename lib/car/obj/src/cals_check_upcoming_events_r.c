/* **** Notes

Check upcoming events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_check_upcoming_events_r(signed(n),time_t(criterion),time_t(dif),cals_roll_t(*cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*cache)))) return(0x00);

AND(flag,0x00);
if(*(CLI_INDEX+(R(event,*cache)))) flag++;
if(!n) flag++;

if(flag) {
flag = (~CALS_ERROR);
AND(R(flag,*argp),flag);
return(0x00);
}

r = cals_cache_day_events(dif,cache,argp);
if(!r) return(0x00);

r = cals_cache_upcoming_events(criterion,&ev,cache);
if(!r) return(0x00);

if(!ev) {
if(*(CLI_LEAD+(R(event,*cache)))) {
r = cals_remove_cached_events(cache);
if(!r) return(0x00);
}}
else *(CLI_INDEX+(R(event,*cache))) = (ev);

dif = (dif+(24*(60*(60))));

return(0x01+(cals_check_upcoming_events_r(--n,criterion,dif,cache,argp)));
}
