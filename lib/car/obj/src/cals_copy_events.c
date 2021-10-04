/* **** Notes

Copy
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_copy_events(cals_event_t(*di),cals_event_t(*si))) {

auto cals_event_t *ev;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

R(w,*di) = (R(w,*si));
R(b,*di) = (R(b,*si));
R(t,*di) = (R(t,*si));
R(colors,*di) = (R(colors,*si));
R(flag,*di) = (R(flag,*si));
R(periodic,*di) = (R(periodic,*si));

i = (CALS_DATE);
while(i) *(i+(R(date,*di))) = (*(--i+(R(date,*si))));

i = (CALS_TIME);
while(i) *(i+(R(time,*di))) = (*(--i+(R(time,*si))));

return(0x01);
}
