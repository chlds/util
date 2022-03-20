/*

Press <Ctrl-I> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_i(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-I>");

return(ctrl_indent(argp));
}
