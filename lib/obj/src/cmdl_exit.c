/* **** **** a commandlet for all the commandlets

Commandlet to exit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex

*/


# define external extern
# include <stdio.h>

char signed(__cdecl cmdl_exit(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed char(Running);

/* **** CODE/TEXT */
// (Running++);

/* **** Monitoring
printf("%s\n", ("<< cmdl_exit runs."));
printf("%s\n", (char signed(*)) (argp));
//*/

Announcements++;
--Running;
return(0x00);
}
