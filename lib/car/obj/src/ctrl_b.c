/*

Press <Ctrl-B> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_b(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-B>");

return(ctrl_backward(argp));
}
