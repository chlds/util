/* **** Notes

Agent

Remarks:
Convert the argv into (signed char(**argv))
with fn. GetCommandLineW and fn. cv_bw beforehand
*/


# define CAW_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl agent_winmain(signed(__cdecl*f)(void(*inst),void(*prev_inst),signed char(**argv),signed(cmdshow)),void(*inst),void(*prev_inst),signed char(*argp),signed(cmdshow))) {
auto signed char **v;
auto signed char *b;
auto signed r;
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
