/* **** Notes

Commandlet to clear the console screen
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl_clear_b_r(sat_t(*argp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);

if(!(cli_es(CTRL_T))) return(0x00);
if(!(cli_es(CTRL_L))) return(0x00);

printf("\n");
printf("%s \n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s \n", "Commandlet or text:");

return(0x01);
}
