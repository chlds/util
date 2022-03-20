/*

Press <Ctrl-]> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_rsb(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-]>");

// return(f(argp));
return(0x01);
}
