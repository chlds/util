/* **** **** a commandlet for all the commandlets

to clear the console screen

*/



# define C_CODE_STDS
# define external extern

# include "./../../../incl/config.h"



char signed(__cdecl cmdl_clear(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external char signed(Running);


/* **** **** CODE/TEXT */

(Running++);

system("cls");

printf("\n%s", ("Please type --exit or press <Ctrl-C> to stop."));
printf("\n%s", ("Command or text:"));
printf("\n\n");

(--Running);

return(char signed) (NIL);
}
