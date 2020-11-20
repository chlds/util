/* **** Notes

Display events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_events(cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CALS_INVALID&(R(flag,*argp))) return(0x01);

// column of the left
printf(" %2d %s ",*(CALS_DI+(R(date,*argp))),*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,*argp))))));
printf("%2d:%02d ",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))));
printf("  ");

// column of the right
printf("%s ",R(b,*argp));
printf("\n");

return(0x01);
}
