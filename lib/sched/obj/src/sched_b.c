/* **** Notes

Flag SCHED_ALREADY on success
*/


# define SCHED_H
# define CAR_H
# define CAL_H
# define CAW_H
# define TIME_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl sched_b(signed(arg/* local */),sched_t(*argp))) {
auto signed r;
auto signed short hr,mn;
auto signed short flag;
auto time_t tt,t;
auto signed delay;
auto signed quantum = (0x10);
auto signed nap = (3); // minutes
if(!argp) return(0x00);
AND(flag,0x00);
AND(t,0x00);
delay = (0x03*(quantum));
hr = (*(SCHED_HR+(R(time,*argp))));
mn = (*(SCHED_MN+(R(time,*argp))));
while(0x01) {
if(flag) {
OR(*(R(flag,*argp)),flag);
if(SCHED_MORPH&(*(R(flag,*argp)))) break;
}
r = alert_b_r(arg,hr,mn);
if(!r) flag = (SCHED_IRR|(SCHED_ERROR|(SCHED_MORPH)));
if(EQ(r,0x01)) flag = (SCHED_ALREADY|(SCHED_MORPH));
if(EQ(r,~0x00)) {
// near
if(SCHED_MONITOR&(*(R(flag,*argp)))) {
tt = (t);
time(&t);
if(!(EQ(tt,t))) {
printf("\r");
cal_out_time(t);
}}
sleep_beta(delay);
}
if(EQ(r,~0x01)) {
// far
if(!(sched_siesta(nap,argp))) flag = (SCHED_ERROR|(SCHED_MORPH));
if(SCHED_MORPH&(*(R(flag,*argp)))) OR(flag,SCHED_MORPH);
}
if(_kbhit()) {
// cancel
r = _getch();
*(R(r,*argp)) = (r);
flag = (SCHED_MORPH);
}}
if(SCHED_ERROR&(*(R(flag,*argp)))) return(0x00);
return(0x01);
}
