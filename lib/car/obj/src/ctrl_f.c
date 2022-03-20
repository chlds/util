/*

Press <Ctrl-F> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_f(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-F>");

return(ctrl_forward(argp));
}
