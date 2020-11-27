/* **** Notes

Cache upcoming events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_upcoming_events(time_t(criterion),cals_event_t(**cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;

auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_sort_events(argp);
if(DBG) printf("[%s %d] ","Sorted",r);
if(!r) {
/*
printf("%s \n","<< Error at fn. cals_sort_events()");
return(0x00);
//*/
}

AND(flag,0x00);
t = (criterion);
event = (*(CLI_LEAD+(R(event,*argp))));

while(event) {
if(!(t^(R(t,*event)))) flag++;
if(t<(R(t,*event))) flag++;
if(flag) break;
event = (R(s,*event));
}

*cache = (event);

return(0x01);
}
