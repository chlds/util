/*

Press <Ctrl-V> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_v(void(*argp))) {

if(DBG) printf("%s ","<Ctrl-V>");

// return(f(argp));
return(0x01);
}
