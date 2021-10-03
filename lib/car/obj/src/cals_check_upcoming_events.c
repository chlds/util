/* **** Notes

Check upcoming events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_check_upcoming_events(signed(n),time_t(criterion),cals_roll_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto time_t dif;
auto signed i,r;

if(n<(0x00)) return(0x00);
if(!n) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_init_roll(0x00,cache);
if(!r) return(0x00);

OR(R(flag,*argp),CALS_ERROR);
r = cals_check_upcoming_events_r(n,criterion,criterion,cache,argp);
if(CALS_ERROR&(R(flag,*argp))) AND(r,0x00);

return(r);
}
