/* **** Notes

Display one line or about 1024 bytes in UTF-8.
*/


# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

r = cv_main_optl_vt(agent_lit,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main_optl_vt()");

return(0x00);
}
