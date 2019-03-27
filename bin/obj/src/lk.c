/* **** Notes

Look the environment variables

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

/* **** **** DATA
auto int signed const(QUANTUM) = (0x10);
auto int signed const(SNOOZE) = (0x08);
auto int signed const(DELAY) = (0x02*(QUANTUM));
//*/

/* **** **** CODE/TEXT */
printf("\n");
printf("%s\n", ("The arguments:"));
catln(argv);

printf("\n");
printf("%s\n", ("The environment variables:"));
catln(envp);

return(NIL);
}
