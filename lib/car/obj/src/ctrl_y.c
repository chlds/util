/*

Press <Ctrl-Y> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_y(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-Y>");

// return(f(argp));
return(0x01);
}
