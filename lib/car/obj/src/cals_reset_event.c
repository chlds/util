/* **** Notes

Reset an event.

Remarks:
Refer at fn. cv_date, fn. cals_parse, fn. cals_entry and fn. cals_init_event.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_reset_event(signed char(*content),cals_event_t(*argp))) {

auto signed char *b;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

if(!content) return(0x00);
if(!argp) return(0x00);

// init.
i = (CALS_DATE);
while(i) *(--i+(R(date,*argp))) = (0x00);
i = (CALS_TIME);
while(i) *(--i+(R(time,*argp))) = (0x00);

// default
time(&t);
tp = localtime(&t);
*(CALS_YR+(R(date,*argp))) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(R(date,*argp))) = (R(tm_mon,*tp));
*(CALS_DI+(R(date,*argp))) = (R(tm_mday,*tp));
OR(R(flag,*argp),CALS_DATE_TODAY);
// OR(R(flag,*argp),CALS_TIME_ALLDAY);

b = (R(b,*argp));
embed(0x00,b);
if(b) rl(b);

r = ct(content);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
R(b,*argp) = (b);
if(!b) return(0x00);

*b = (0x00);
r = cpy(b,content);
if(!r) return(0x00);

b = (0x00);

return(0x01);
}
