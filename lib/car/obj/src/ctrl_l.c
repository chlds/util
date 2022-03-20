/*

Press <Ctrl-L> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_l(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-L>");

return(ctrl_leap(argp));
}
