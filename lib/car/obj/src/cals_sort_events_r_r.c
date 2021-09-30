/* **** Notes

Sort
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_sort_events_r_r(signed(arg),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

ev = (*(CLI_INDEX+(R(event,*argp))));
if(!ev) return(0x00);
*(CLI_INDEX+(R(event,*argp))) = (*(CLI_SI+(R(event,*ev))));

AND(flag,0x00);
t = (R(t,*ev));
if(!(t<(R(t,**(CLI_INDEX+(R(event,*argp))))))) OR(flag,0x01);
if(EQ(t,R(t,**(CLI_INDEX+(R(event,*argp)))))) {
flag = (R(flag,**(CLI_INDEX+(R(event,*argp)))));
if(CALS_TIME_ALLDAY&(flag)) OR(flag,0x01);
else AND(flag,0x00);
}

if(flag) {
r = cals_order_events(argp);
if(!r) return(0x00);
}

return(0x01+(cals_sort_events_r_r(--arg,argp)));
}
