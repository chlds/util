/* **** Notes

Cache all events.

Remarks:
Put a null pointer at the end of arguments.
Release buffer later. Refer at fn. cals_remove_cached_events.
//*/


# define CALEND
# define CAR
# include <stdarg.h>
# include "../../../incl/config.h"

signed(__cdecl cals_cache_all_events(cals_roll_t(**argp),...)) {

auto cals_roll_t **roll;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(*argp) return(0x00);

r = cals_init_roll(0x00,*argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_roll()");
return(0x00);
}

roll = (cals_roll_t**) (&argp);
roll++;

return(cals_cache_all_events_r(argp,roll));
}
