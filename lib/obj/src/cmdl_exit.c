/* **** **** a commandlet for all the commandlets

to exit

*/



# define C_CODE_STDS
# define external extern

# include "./../../../incl/config.h"



char signed(__cdecl cmdl_exit(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external char signed(Running);


/* **** **** CODE/TEXT */

// (Running++);


/* **** Monitoring
printf("%s\n", ("<< cmdl_exit runs."));
printf("%s\n", (char signed(*)) (argp));
//*/


(Announcements++);

(--Running);

return(char signed) (NIL);
}
