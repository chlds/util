/* **** Notes

Convert the code of line break into LF.

Remarks:
This program may immediately cause a stack overflow.
*/


# define CALEND
# define CAR
# include "../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed r;

AND(r,0x00);
if(!(cvlf_agent(argc,argv,envp))) r = cli_message(r,"<< Error at fn. cvlf_agent()");

return(r);
}
