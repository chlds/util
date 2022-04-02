/* **** Notes

Schedule.

Remarks:
Not converted into a virtual terminal.
*/


# define CAR
# define CALEND
# include <stdio.h>
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed r;

r = agent_sched(argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. agent_sched()");

return(0x00);
}
