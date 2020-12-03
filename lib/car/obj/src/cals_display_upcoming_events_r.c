/* **** Notes

Display upcoming events or..
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_upcoming_events_r(time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto time_t hr,mn;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

printf("\t%2d:%02d | ",*(CALS_HR+(R(time,*cache))),*(CALS_MN+(R(time,*cache))));
r = cli_outs(R(b,*cache));
if(!r) return(0x00);
printf(" ");
// also
t = (criterion);
t = (-t+(R(t,*cache)));
t = (t/(60));
if(t<(60)) printf("(%s %lld %s) \n","in about",t,"min.");
else {
mn = (t%(60));
hr = (t/(60));
printf("(%s %lld %s %lld %s) \n","in about",hr,"h. and",mn,"min.");
}

cache = (R(s,*cache));

return(0x01+(cals_display_upcoming_events_r(criterion,cache,argp)));
}
