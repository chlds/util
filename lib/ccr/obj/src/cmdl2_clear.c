/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define C_CODE_STDS
# define CCR
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_clear(SAT(*argp))) {

/* **** DATA */
auto signed i,r;

/* **** CODE/TEXT */
INC(R(Running,*argp));

system("cls");

printf("\n");
printf("%s \n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s \n", "Commandlet or text:");

printf("\n");

DEC(R(Running,*argp));

return(0x00);
}
