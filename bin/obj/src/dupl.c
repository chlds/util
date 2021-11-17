/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define CAR
# include <stdio.h>
# include "./../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed r;
auto signed short flag;

r = dupl_agent_w(argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. dupl_agent_w()");

return(0x00);
}
