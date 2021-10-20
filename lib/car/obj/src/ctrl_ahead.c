/*

Press <Ctrl-A> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_ahead(ty_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
AND(flag,0x00);
OR(flag,CLI_MORPH);
NOT(flag);
AND(*(CLI_BASE+(R(flag,*page))),flag);

// return(f(argp));
return(cli_es(CTRL_A));
}
