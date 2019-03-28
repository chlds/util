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

auto char signed(c);

/* **** **** CODE/TEXT */
printf("\n");

c = catpp(argv);
printf("%s%d\n", ("The numbre: "), (c));

c = catpp(envp);
printf("%s%d\n", ("The numbre: "), (c));

return(NIL);
}
