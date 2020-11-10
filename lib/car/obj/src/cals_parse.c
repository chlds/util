/* **** Notes

Parse an event.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_parse(signed char(*content),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!content) return(0x00);
if(!argp) return(0x00);

r = cv_subject(content,argp);
if(!r) return(0x00);
if(CALS_NO_SUBJECT&(R(flag,*argp))) return(0x00);

r = cv_date(content,argp);
// if(!r) return(0x00);
if(!r) {
if(!(CALS_DATE_TODAY&(R(flag,*argp)))) return(0x00);
}

r = cv_time(content,argp);
// if(!r) return(0x00);
if(!r) OR(R(flag,*argp),CALS_TIME_ALLDAY);

return(0x01);
}
