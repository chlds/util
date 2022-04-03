/* **** Notes

Commandlet to exit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_exit(SAT(*argp))) {

auto signed r;

/* **** Monitoring
printf("%s \n", "<< cmdl_exit runs.");
//*/

INC(R(Announcements,*argp));

return(0x01);
}
