/* **** Notes

Siesta

Remarks:
Cancel if any key is pressed.
diff. -/+ 3 seconds.
//*/


# define CAR
# define CALEND
# include "../../../incl/config.h"

signed(__cdecl alert_siesta(signed(arg/* minutes */),alert_t(*argp))) {

auto signed char *b;
auto signed r;
auto time_t tt,t;
auto signed sm = (3*(1000));

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

arg = (60*(arg));
if(arg<(0x01)) return(0x00);

time(&t);
tt = (t);
tt = (arg+(tt));
while(0x01) {
if(*(CLI_BASE+(R(r,*argp)))) break;
time(&t);
if(!(t<(tt))) break;
sleep_b(sm);
if(_kbhit()) {
// Cancel
r = _getch();
*(CLI_BASE+(R(r,*argp))) = (r);
}}

return(0x01);
}
