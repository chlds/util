/* **** Notes

Flag CLI_ALREADY on success.
*/


# define CAR
# define CALEND
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl sched_b(signed(arg/* local */),sched_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short hr,mn;
auto signed short flag;
auto time_t t;
auto signed delay;
auto signed quantum = (0x10);
auto signed nap = (3); // minutes

if(!argp) return(0x00);

AND(flag,0x00);
delay = (0x03*(quantum));
hr = (*(CALS_HR+(R(time,*argp))));
mn = (*(CALS_MN+(R(time,*argp))));
while(0x01) {
if(flag) {
OR(*(CLI_BASE+(R(flag,*argp))),flag);
if(CLI_MORPH&(*(CLI_BASE+(R(flag,*argp))))) break;
}
r = alert_b_r(arg,hr,mn);
if(!r) flag = (CLI_IRR|(CLI_ERROR|(CLI_MORPH)));
if(EQ(r,0x01)) flag = (CLI_ALREADY|(CLI_MORPH));
if(EQ(r,~0x00)) {
// near
if(CLI_MONITOR&(*(CLI_BASE+(R(flag,*argp))))) {
printf("\r");
time(&t);
cals_out_t(t);
}
sleep_b(delay);
}
if(EQ(r,~0x01)) {
// far
if(!(sched_siesta(nap,argp))) flag = (CLI_ERROR|(CLI_MORPH));
}
if(_kbhit()) {
// cancel
r = _getch();
*(CLI_BASE+(R(r,*argp))) = (r);
flag = (CLI_MORPH);
}}

if(CLI_ERROR&(*(CLI_BASE+(R(flag,*argp))))) return(0x00);

return(0x01);
}
