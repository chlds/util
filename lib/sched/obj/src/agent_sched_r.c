# define SCHED_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl agent_sched_r(sched_t(*di),signed char(*si))) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
v = (0x00);
b = (si);
r = cv_argt(&v,b);
if(!r) return(0x00);
b = (*(--r+(v)));
r = agent_sched_rr(di,b);
rl_v(&v);
b = (0x00);
return(r);
}
