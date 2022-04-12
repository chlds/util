/* **** Notes

Agent.
*/


# define CCR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_ck(void(*inst),void(*prev_inst),signed char(**argv),signed(cmdshow))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argv) return(0x00);
if(!(*argv)) return(0x00);

v = (argv);
r = agent_ck_r_mb(inst,prev_inst,v,cmdshow);
if(!r) currently_occurring_error_mb_ok(0x00,0x00,"<< Error at fn. agent_ck_r_mb()");

v = (0x00);

return(r);
}
