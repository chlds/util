/* **** Notes

Output clipboard text.
*/


# define DUAL_CONFIG_H
# define DEPIN_H
# define STDIO_H
# define CAR
# include "./../../../lib/incl/config.h"
# include "./../../../lib/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

r = cv_main_optl_vt(agent_depin,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main_optl_vt()");

return(0x00);
}
