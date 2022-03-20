/*

Press <Ctrl-H> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_h(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-H>");

return(ctrl_bs(argp));
}
