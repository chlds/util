/*

Press <Ctrl-S> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_s(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-S>");

// return(f(argp));
return(0x01);
}
