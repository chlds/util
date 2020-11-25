/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events_r(signed short(flag),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;
auto signed short yr,mo,di;

/* **** CODE/TEXT */
if(!argp) return(0x00);

event = (argp);

if(!(CALS_INVALID&(R(flag,*argp)))) {
// column of the left
if(!flag) printf(" %2d %s ",*(CALS_DI+(R(date,*argp))),*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,*argp))))));
else printf("\t");
printf("%2d:%02d ",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))));
printf("  ");
// column of the right
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf("%s ","[ALL-DAY]");
printf("%s ",R(b,*argp));
printf("\n");
}

argp = (R(s,*argp));
if(argp) {
AND(flag,0x00);
yr = (*(CALS_YR+(R(date,*event))));
mo = (*(CALS_MO+(R(date,*event))));
di = (*(CALS_DI+(R(date,*event))));
if(!(yr^(*(CALS_YR+(R(date,*argp)))))) {
if(!(mo^(*(CALS_MO+(R(date,*argp)))))) {
if(!(di^(*(CALS_DI+(R(date,*argp)))))) flag++;
}}}

event = (0x00);

return(0x01+(cals_display_events_r(flag,argp)));
}
