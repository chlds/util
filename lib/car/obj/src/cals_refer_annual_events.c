/* **** Notes

Refer

Remarks:
Refer at fn. cals_refer_events_r_r.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_annual_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp))) {

auto signed i,r;

if(!cache) return(0x00);
if(!cached) return(0x00);
if(!argp) return(0x00);

r = cals_refer_annual_events_internal(flag,cache,argp);
// if(!r) return(0x00);
if(r) {
r = cals_cache_periodic_events(r,cache,cached,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_periodic_events()");
return(0x00);
}}

return(r);
}
