/* **** Notes

Siesta.

Remarks:
Cancel if any key is pressed.
*/


# define CAR
# define CALEND
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl sched_siesta(signed(arg/* minutes */),sched_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto time_t tt,t;
auto signed seconds = (60);
auto signed delay = (3*(1000)); // based on 3 second minutes.

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

arg = (seconds*(arg));
if(arg<(0x01)) return(0x00);

time(&t);
tt = (t);
tt = (arg+(tt));
while(0x01) {
if(CLI_MORPH&(*(CLI_BASE+(R(flag,*argp))))) break;
time(&t);
if(!(t<(tt))) break;
sleep_b(delay);
if(_kbhit()) {
// cancel
r = _getch();
*(CLI_BASE+(R(r,*argp))) = (r);
OR(*(CLI_BASE+(R(flag,*argp))),CLI_MORPH);
}}

return(0x01);
}
