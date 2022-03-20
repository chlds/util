/*

Press <Ctrl-R> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_r(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-R>");

// return(f(argp));
return(0x01);
}
