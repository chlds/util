/* **** **** a commandlet for all the commandlets

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define C_CODE_STDS
# define external extern

# include "./../../../incl/config.h"

char signed(__cdecl cmdl_clear(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed char(Running);

/* **** CODE/TEXT */
Running++;

system("cls");

printf("\n%s", ("Please type --exit or press <Ctrl-C> to stop."));
printf("\n%s", ("Commandlet or text:"));
printf("\n\n");

--Running;
return(0x00);
}
