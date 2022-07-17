/* **** Notes

Initialise.
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl init_calendar_date_time(calendar_date_time_t(*argp))) {
auto signed r;
auto signed short w;
if(!argp) return(0x00);
AND(w,0x00);
r = (CALENDAR_DATE);
while(r) *(--r+(R(date,*argp))) = (w);
r = (CALENDAR_TIME);
while(r) *(--r+(R(time,*argp))) = (w);
return(0x01);
}
