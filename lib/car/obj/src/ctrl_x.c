/*

Press <Ctrl-X> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_x(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-X>");

return(ctrl_trim(argp));
}
