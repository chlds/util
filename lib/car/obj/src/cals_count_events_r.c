/* **** Notes

Count
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_events_r(cals_event_t(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);

argp = (R(s,*argp));

return(0x01+(cals_count_events_r(argp)));
}
