/* **** Notes

Display upcoming events or..
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_display_upcoming_events(signed(day),time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(message[]) = {
("Upcoming"),
("Tomorrow"),
("The day after tomorrow"),
(0x00),
};

auto cals_event_t *event;
auto struct tm *tp;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(day<(0x00)) return(0x00);
if(!day) return(0x00);
if(0x03<(day)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);
if(!(CALS_BOUND&(R(flag,*argp)))) return(0x00);

t = (criterion);
tp = localtime(&t);
if(!tp) return(0x00);

printf("\n");

printf(" %s %d \n",*(CAPS_MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf(" %2d %s ",R(tm_mday,*tp),*(CAPS_DAYOFTHEWK+(R(tm_wday,*tp))));
printf("%2d:%02d \n",R(tm_hour,*tp),R(tm_min,*tp));

printf("\n");

i = (day);
printf(" %s \n",*(message+(--i)));

r = cals_display_upcoming_events_r(criterion,cache,argp);

return(r);
}
