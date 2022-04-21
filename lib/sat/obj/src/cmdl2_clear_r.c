/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define DUAL_CONFIG_H
# define SAT_H
# define STDIO_H
# define STDLIB_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl cmdl2_clear_r(SAT(*argp))) {

auto signed r;

if(!(cli_es(CTRL_T))) return(0x00);
if(!(cli_es(CTRL_L))) return(0x00);

printf("\n");

printf("%s \n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s \n", "Commandlet or text:");
printf("\n");

return(0x01);
}
