/*

Delete backward.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_del_backward(cli_property_t(*argp))) {

auto signed char *sym;
auto signed char *b;
auto cli_rule_t *rule;
auto cli_text_t *text;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(EQ(b,*(CLI_BASE+(R(b,*rule))))) return(0x01);

sym = (*(CLI_BASE+(R(sym,*text))));
r = cue_back(sym,b,*(CLI_BASE+(R(b,*rule))));
if(!r) return(0x00);

b = (b+(0x01+(~r)));
embed(0x00,b);

r = cli_fn_ahead(argp);
if(!r) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_coord_outs(R(align,*text),b)));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

OR(R(flag,*text),CLI_REFRESH);
sym = (0x00);

return(0x01);
}
