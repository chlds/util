/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_events_r(signed short(flag),cals_roll_t(*cache),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto signed i,r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*cache)))) return(0x00);
if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

ev = (*(CLI_LEAD+(R(event,R(roll,*argp)))));
r = cals_refer_events_r_r(flag,ev,cache,argp);

return(r);
}
