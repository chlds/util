/*

Delete backward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_bs(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(EQ(b,*(CLI_BASE+(R(b,*rule))))) return(0x01);

r = ct_a_back(b);
if(!r) return(0x00);

b = (b+(0x01+(~r)));
embed(0x00,b);
if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}
