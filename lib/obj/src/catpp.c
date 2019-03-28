/* **** **** **** **** Refer on

Recursively Output

//*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


char signed(__cdecl catpp(char signed(**argp))) {

/* **** DATA
auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(SNOOZE) = (int signed) (0x08);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
//*/

/* **** CODE/TEXT */

if(!argp) return(NIL);
if(!(*argp)) return(NIL);

printf("%s\n", (*(argp++)));

return(1+(catpp(argp)));
}
