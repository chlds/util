/* **** Notes

Commandlet to help
*/


# define SAT_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cmdl2_help_r(SAT(*argp))) {

auto signed r;

/* Monitoring
printf("%s \n","<< cmdl_exit runs.");
//*/

printf("\n");

printf("\t%s \n","Commandlets:");
printf("\n");

printf("\t%s \n","--exit to exit");
printf("\t%s \n","--help to help");
printf("\t%s \n","--clear to clear the screen");
printf("\t%s \n","--time [seconds] to display the local time");
printf("\t%s \n","--output to output except for the commandlets");
printf("\t%s \n","--history to output the history");
printf("\n");

printf("\t%s \n","GitHub: github.com/chlds/util/");
printf("\n");

return(0x01);
}
