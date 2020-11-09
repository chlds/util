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

r = cv_date(content,argp);
if(!r) return(0x00);

r = cv_time(content,argp);
if(!r) return(0x00);

return(0x01);
}
