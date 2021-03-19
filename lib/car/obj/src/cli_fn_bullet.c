/*

Type a bullet (i.e., 0x2022) in UTF-8.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_bullet(cli_property_t(*argp))) {

auto signed char *b;
auto cli_text_t *text;
auto cli_rule_t *rule;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

// type a bullet in three bytes
embed(0x00,b);
*b = (0xE0|0x02);
b++;
*b = (0x80|0x00);
b++;
*b = (0x80|0x20|0x02);
b++;
*b = (0x00);

b = (*(CLI_INDEX+(R(b,*rule))));
r = cli_out(b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

OR(R(flag,*text),CLI_REFRESH);

return(0x01);
}
