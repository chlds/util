/*

Indent.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_indent(cli_property_t(*argp))) {

auto signed char *b;
auto cli_rule_t *rule;
auto cli_text_t *text;
auto signed i,r;
auto signed short flag;

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

embed(0x00,b);
*b = (signed char) (HT);
r = cli_coord_out(R(align,*text),b);
if(!r) return(0x00);

b = (r+(b));
// b++;
*(CLI_INDEX+(R(b,*rule))) = (b);
*b = (0x00);
b = (0x00);

OR(R(flag,*text),CLI_REFRESH);

return(0x01);
}
