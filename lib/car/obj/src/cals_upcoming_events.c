/* **** Notes

Display upcoming events or..
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_upcoming_events(signed(days),time_t(criterion),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto cals_roll_t roll;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(days<(0x00)) return(0x00);
if(!days) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);
if(!(CALS_BOUND&(R(flag,*argp)))) return(0x00);

if(0x03<(days)) days = (0x03);

t = (criterion);
i = (days);
r = cals_check_upcoming_events(i,t,&roll,argp);
if(!r) return(0x00);

ev = (*(CLI_INDEX+(R(event,roll))));
if(ev) {
r = cals_display_upcoming_events(r,criterion,ev,&roll);
if(!r) return(0x00);
r = cals_remove_cached_events(&roll);
if(!r) return(0x00);
}
else {
}

return(0x01);
}
