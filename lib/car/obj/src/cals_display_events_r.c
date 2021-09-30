/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events_r(time_t(prev),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short yr,mo,di;
auto signed short flag;

if(!argp) return(0x00);

if(!(CALS_INVALID&(R(flag,*argp)))) {
r = cals_display_events_r_r(&prev,argp);
if(!r) return(0x00);
printf("\n");
}

argp = (*(CLI_SI+(R(event,*argp))));

return(0x01+(cals_display_events_r(prev,argp)));
}
