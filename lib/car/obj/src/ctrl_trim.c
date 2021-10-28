/*

Press <Ctrl-X> to invoke the function.

Remarks:
Refer at fn. ctrl_fn_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_trim(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// page = (&(R(page,*argp)));
rule = (R(rule,*argp));
b = (*(CLI_BASE+(R(b,*rule))));
embed(0x00,b);

// return(f(argp));
return(cli_es(CTRL_A));
}
