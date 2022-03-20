/*

Press <Ctrl-P> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_p(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-P>");

// return(f(argp));
return(0x01);
}
