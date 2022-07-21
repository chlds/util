/* **** Notes

Display the privileges to a process.
*/


# define DUAL_CONFIG_H
# define PRIV_H
# define STDIO_H
# define CAR
# include "./../../../lib/incl/config.h"
# include "./../../../lib/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {
if(!(cv_main_optl_vt(agent_priv,argc,argv,envp))) printf("%s \n","<< Error at fn. cv_main_optl_vt()");
return(0x00);
}
