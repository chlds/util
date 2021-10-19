/*

Delete forward.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_kick(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (R(rule,*page));
r = init_rule(0x01,CLI_OFFSET,&rule);
if(!r) return(0x00);

// rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

embed(0x00,b);
b = (0x00);

return(0x01);
}
