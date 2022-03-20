/*

Press <Ctrl-G> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_g(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-G>");

return(ctrl_go(argp));
}
