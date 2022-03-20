/*

Press <Ctrl-Q> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_q(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-Q>");

return(ctrl_esc(argp));
}
