/*

Go backward.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_backward(cli_property_t(*argp))) {

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

r = ct_a_back(b);
if(!r) return(0x00);

b = (b+(0x01+(~r)));

r = cli_fn_ahead(argp);
if(!r) return(0x00);

*(CLI_INDEX+(R(b,*rule))) = (b);
b = (*(CLI_BASE+(R(b,*rule))));

while(0x01) {
if(!(b<(*(CLI_INDEX+(R(b,*rule)))))) break;
r = cli_coord_out(R(align,*text),b);
if(!r) return(0x00);
b = (r+(b));
}

b = (0x00);

return(0x01);
}