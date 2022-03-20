/*

Press <Ctrl-E> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_e(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-E>");

return(ctrl_edge(argp));
}
