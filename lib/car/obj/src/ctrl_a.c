/*

Press <Ctrl-A> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_a(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-A>");

return(ctrl_ahead(argp));
}
