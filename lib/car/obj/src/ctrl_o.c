/*

Press <Ctrl-O> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_o(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-O>");

// return(f(argp));
return(0x01);
}
