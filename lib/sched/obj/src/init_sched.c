/* **** Notes

Initialise
*/


# define SCHED_H
# include "./../../../config.h"

signed(__cdecl init_sched(sched_t(*argp))) {
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
OR(r,SCHED_DATE);
while(r) *(--r+(R(date,*argp))) = (0x00);
AND(r,0x00);
OR(r,SCHED_TIME);
while(r) *(--r+(R(time,*argp))) = (0x00);
AND(r,0x00);
OR(r,OBJS);
while(r) *(--r+(R(flag,*argp))) = (0x00);
AND(r,0x00);
OR(r,OBJS);
while(r) *(--r+(R(r,*argp))) = (0x00);
return(0x01);
}
