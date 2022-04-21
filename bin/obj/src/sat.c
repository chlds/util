/* **** Notes

Op.
*/


# define DUAL_CONFIG_H
# define SAT_H
# define STDIO_H
# define CAR
# include "./../../../lib/incl/config.h"
# include "./../../../lib/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char *b;
auto signed r;

r = cv_main_optl_vt(agent_sat,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main_optl_vt()");

return(0x00);
}
