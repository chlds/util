/* **** Notes

Schedule

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_sched_events(signed char(*content),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_t *event;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!content) return(0x00);
if(!argp) return(0x00);

event = (*(CLI_INDEX+(R(event,*argp))));

// after parsing the content..
time(&t);
r = cals_sched(t,event);
if(!r) return(0x00);

b = (content);
r = keep(&(R(b,*event)),b);
if(!r) return(0x00);

return(0x01);
}
