/*

Press <Ctrl-D> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_d(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-D>");

return(ctrl_del(argp));
}
