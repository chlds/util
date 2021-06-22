/* **** Notes

Count
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_events(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

ev = (*(CLI_LEAD+(R(event,*argp))));

return(cals_count_events_r(ev));
}
