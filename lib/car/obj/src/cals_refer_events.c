/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_events(signed short(flag),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short day;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// for today
event = (&(R(today,*argp)));
r = cals_refer_events_internal(flag,event,argp);
// if(!r) return(0x00);
if(r) {
r = cals_display_events(0x00/* for today */,event);
if(!r) {
printf("%s \n","<< Error at fn. cals_display_events()");
return(0x00);
}}

return(0x01);
}
