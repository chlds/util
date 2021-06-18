/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_events_r_r(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto signed i,r;

if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

if(CALS_PERIODIC&(R(flag,*cache))) {
r = cals_refer_periodic_events(flag,cache,cached,argp);
// if(!r) return(0x00);
}

else {
r = cals_refer_events_internal(flag,cache,argp);
// if(!r) return(0x00);
if(r) {
r = cals_cache_events(cache,cached);
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_events()");
return(0x00);
}}}

cache = (R(s,*cache));

return(0x01+(cals_refer_events_r_r(flag,cache,cached,argp)));
}
