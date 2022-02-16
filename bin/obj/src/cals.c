/* **** Notes

Calendar
*/


# define CALEND
# define CAR
# include <stdio.h>
# include "./../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed r;
auto signed short flag;

r = cv_main_optl_vt(agent_cals,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main_optl_vt()");

return(0x00);
}
