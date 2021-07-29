/* **** Notes

Display upcoming events or..
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_upcoming_events_r(time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed char *b;
auto time_t t;
auto signed i,r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = cals_display_upcoming_events_r_r(criterion,cache);
if(!r) return(0x00);

ev = (*(CLI_LEAD+(R(event,*argp))));
r = cals_display_upcoming_allday_events(ev);

return(r);
}
