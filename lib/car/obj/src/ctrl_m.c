/*

Press <Ctrl-M> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_m(ty_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) printf("%s ","<Ctrl-M>");

OR(*(CLI_BASE+(R(flag,*argp))),CLI_BR);

// return(f(argp));
return(0x01);
}
