/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define CALEND
# define CAR
# include "../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed r;

AND(r,0x00);
if(!(lk_agent(argc,argv,envp))) r = cli_message(r,"<< Error at fn. lk_agent()");

return(r);
}
