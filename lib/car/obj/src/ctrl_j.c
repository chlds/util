/*

Press <Ctrl-J> to invoke the function.

Remarks:
Refer at fn. ctrl_fn.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_j(ty_t(*argp))) {

if(DBG) printf("%s ","<Ctrl-J>");
// OR(*(CLI_BASE+(R(flag,*argp))),CLI_BR);

return(ctrl_del_backward(argp));
}
