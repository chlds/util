/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define external extern
# define C_CODE_STDS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_clear(void(*argp))) {

/* **** DATA */
external signed short(Announcements);
external signed(Running);

/* **** CODE/TEXT */
Running++;

system("cls");

printf("\n");
printf("%s\n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s\n", "Commandlet or text:");

printf("\n");

--Running;
return(0x00);
}
