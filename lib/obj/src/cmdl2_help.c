/* **** Notes

Commandlet to help
*/


# define external extern
# define C_CODE_STDS
# include "./../../../incl/config.h"

unsigned int(__stdcall cmdl2_help(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);

/* **** CODE/TEXT */
Running++;

/* **** Monitoring
printf("%s\n", ("<< cmdl_exit runs."));
printf("%s\n", (char signed(*)) (argp));
//*/

printf("\n%s", ("Commands: --help to help, "));
printf("%s", ("--time to output the local time, "));
printf("%s", ("--output to output except commands, "));
printf("%s", ("--history to output the history"));

printf("\n\n");


--Running;
return(0x00);
}
