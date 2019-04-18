/* **** Notes

Commandlet to exit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define external extern
# include <stdio.h>

unsigned int(__stdcall cmdl2_exit(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);

/* **** CODE/TEXT */
// Running++;

/* **** Monitoring
printf("%s\n", ("<< cmdl_exit runs."));
printf("%s\n", (char signed(*)) (argp));
//*/

Announcements++;
--Running;
return(0x00);
}
