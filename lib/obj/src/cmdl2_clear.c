/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define external extern
# define C_CODE_STDS
# include "./../../../incl/config.h"

unsigned int(__stdcall cmdl2_clear(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);

/* **** CODE/TEXT */
Running++;

system("cls");

printf("\n%s", ("Please type --exit or press <Ctrl-C> to stop."));
printf("\n%s", ("Commandlet or text:"));
printf("\n\n");

--Running;
return(0x00);
}
