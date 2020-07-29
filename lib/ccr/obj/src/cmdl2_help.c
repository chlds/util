/* **** Notes

Commandlet to help
*/


# define external extern
# define C_CODE_STDS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_help(void(*argp))) {

/* **** DATA */
external signed short(Announcements);
external signed(Running);

/* **** CODE/TEXT */
Running++;

/* Monitoring
printf("%s\n","<< cmdl_exit runs.");
printf("%s\n",(signed char(*)) argp);
//*/

printf("\n");

printf("  %s\n","Commandlets:");
printf("\n");
printf("  %s\n","--quit to quit");
printf("  %s\n","--help to help");
printf("  %s\n","--clear to clear the screen");
printf("  %s\n","--time [seconds] to display the local time");
printf("  %s\n","--output to output except for the commandlets");
printf("  %s\n","--history to output the history");

printf("\n");

--Running;

return(0x00);
}
