/* **** Notes

Agent.
*/


# define CCR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_winmain(signed(__cdecl*f)(void(*inst),void(*prev_inst),signed char(**argv),signed(cmdshow)),void(*inst),void(*prev_inst),signed char(*argp),signed(cmdshow))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!f) return(0x00);
if(!argp) return(0x00);

v = (0x00);
b = (argp);
r = cv_argt(&v,b);
if(!r) {
currently_occurring_error_mb_ok(0x00,0x00,"<< Error at fn. cv_argt()");
return(0x00);
}

r = f(inst,prev_inst,v,cmdshow);
if(!r) currently_occurring_error_mb_ok(0x00,0x00,"<< Error at fn. f()");

rl_v(&v);
b = (0x00);

return(r);
}
