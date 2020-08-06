/* **** Notes

Commandlet to help
*/


# define C_CODE_STDS
# define CCR
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_help(SAT(*argp))) {

/* **** DATA */
auto signed i,r;

/* **** CODE/TEXT */
INC(R(Running,*argp));

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

DEC(R(Running,*argp));

return(0x00);
}
