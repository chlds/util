/* **** Notes

Siesta

Remarks:
Cancel if any key is pressed
*/


# define SCHED_H
# define CAW_H
# define TIME_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl sched_siesta(signed(arg/* minutes */),sched_t(*argp))) {
auto signed r;
auto time_t tt,t;
auto signed seconds = (60);
auto signed delay = (3*(1000)); // based on 3 second minutes
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
arg = (seconds*(arg));
if(arg<(0x01)) return(0x00);
time(&t);
tt = (t);
tt = (arg+(tt));
while(0x01) {
if(SCHED_MORPH&(*(R(flag,*argp)))) break;
time(&t);
if(!(t<(tt))) break;
sleep_beta(delay);
if(_kbhit()) {
// cancel
r = _getch();
*(R(r,*argp)) = (r);
OR(*(R(flag,*argp)),SCHED_MORPH);
}}
return(0x01);
}
