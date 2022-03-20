/*

Press <Ctrl-Z> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_z(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-Z>");

// return(f(argp));
return(0x01);
}
