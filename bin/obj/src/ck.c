/* **** Notes

Currently under construction

Remarks:
A program for GUI
Based on UTF-16
*/


# define CCR
# include <stdio.h>
# include <windows.h>
# include "./../../../lib/incl/config.h"

signed(WINAPI wWinMain(HINSTANCE(inst),HINSTANCE(prev_inst),PWSTR(cmdline),signed(cmdshow))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;

b = (0x00);
w = GetCommandLineW();
if(!(cv_bw(&b,w))) {
currently_occurring_error_mb_ok(0x00,0x00,"<< Error at fn. cv_bw()");
return(0x00);
}

r = agent_winmain(agent_ck,inst,prev_inst,b,cmdshow);
if(!r) currently_occurring_error_mb_ok(0x00,0x00,"<< Error at fn. agent_winmain()");

rl(b);
b = (0x00);

return(0x00);
}
