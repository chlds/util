/* **** Notes

Cache upcoming events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_upcoming_events(time_t(criterion),cals_event_t(**cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short flag;

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
ev = (*(CLI_LEAD+(R(event,*argp))));

while(ev) {
if(!(t^(R(t,*ev)))) flag++;
if(t<(R(t,*ev))) flag++;
if(flag) break;
ev = (*(CLI_SI+(R(event,*ev))));
}

*cache = (ev);

return(0x01);
}
