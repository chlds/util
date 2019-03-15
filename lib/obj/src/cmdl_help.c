/* **** **** a commandlet for all the commandlets

to help

*/



# define C_CODE_STDS
# define external extern

# include "./../../../incl/config.h"



char signed(__cdecl cmdl_help(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external char signed(Running);


/* **** **** CODE/TEXT */

(Running++);


/* **** Monitoring
printf("%s\n", ("<< cmdl_exit runs."));
printf("%s\n", (char signed(*)) (argp));
//*/


printf("\n%s", ("Commands: --help to help, "));
printf("%s", ("--time to output the local time, "));
printf("%s", ("--output to output except commands, "));
printf("%s", ("--history to output the history"));

printf("\n\n");


(--Running);

return(char signed) (NIL);
}
