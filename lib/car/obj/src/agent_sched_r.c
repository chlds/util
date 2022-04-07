/* **** Notes

Schedule.
*/


# define CAR
# define CALEND
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_sched_r(sched_t(*di),signed char(*si))) {

auto signed char *b;
auto sched_t *sched;
auto signed r;
auto signed short hr;
auto signed short mn;

if(!di) return(0x00);
if(!si) return(0x00);

sched = (di);
b = (si);
r = cv_at(&hr,&mn,b);
*(CALS_HR+(R(time,*sched))) = (hr);
*(CALS_MN+(R(time,*sched))) = (mn);

return(r);
}
