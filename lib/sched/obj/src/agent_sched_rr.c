# define SCHED_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl agent_sched_rr(sched_t(*di),signed char(*si))) {
auto signed char *b;
auto sched_t *sched;
auto signed r;
auto signed short hr;
auto signed short mn;
if(!di) return(0x00);
if(!si) return(0x00);
sched = (di);
b = (si);
r = cv_at_b(&hr,&mn,b);
*(SCHED_HR+(R(time,*sched))) = (hr);
*(SCHED_MN+(R(time,*sched))) = (mn);
return(r);
}
