/* **** Notes

Commandlet to help
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl_help_b_r(sat_t(*argp))) {

auto signed r;

if(!argp) return(0x00);

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

return(0x01);
}
