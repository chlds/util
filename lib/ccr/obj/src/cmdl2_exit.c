/* **** Notes

Commandlet to exit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define CCR
# include "../../../incl/config.h"
# include <stdio.h>

unsigned(__stdcall cmdl2_exit(SAT(*argp))) {

/* **** DATA */
auto signed i,r;

/* **** CODE/TEXT */

/* **** Monitoring
printf("%s\n", "<< cmdl_exit runs.");
printf("%s\n", (signed char(*)) argp);
//*/

INC(R(Announcements,*argp));
DEC(R(Running,*argp));

return(0x01);
}
