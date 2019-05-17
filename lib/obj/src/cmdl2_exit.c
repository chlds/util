/* **** Notes

Commandlet to exit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define external extern
# include <stdio.h>

unsigned(__stdcall cmdl2_exit(void(*argp))) {

/* **** DATA */
external signed short(Announcements);
external signed(Running);

/* **** CODE/TEXT */
// Running++;

/* **** Monitoring
printf("%s\n", "<< cmdl_exit runs.");
printf("%s\n", (signed char(*)) argp);
//*/

Announcements++;
--Running;
return(0x00);
}
