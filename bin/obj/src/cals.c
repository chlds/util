/* **** Notes

Calendar
*/


# define CALEND
# define CBR
# include <stdio.h>
# include "./../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!(cli_init_virtual_terminal_beta(0x00,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

AND(flag,0x00);
v = (0x00);
r = cv_argv_bw(&v,argv);
if(!r) OR(flag,0x01);

if(!flag) {
r = agent_cals(argc,v,0x00);
if(!r) printf("%s \n","<< Error at fn. agent_cals()");
}

if(v) {
r = rl_v(&v);
if(!r) printf("%s \n","<< Error at fn. rl_v()");
}

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

return(0x00);
}
