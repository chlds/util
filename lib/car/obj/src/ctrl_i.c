/*

Press <Ctrl-I> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_i(ty_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) printf("%s ","<Ctrl-I>");

// return(f(argp));
return(ctrl_indent(argp));
}
