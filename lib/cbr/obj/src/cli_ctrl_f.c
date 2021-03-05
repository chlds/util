/*

Press <Ctrl-F> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_f(cli_property_t(*argp))) {

auto signed char *b;
auto cli_rule_t *rule;
auto cli_text_t *text;
auto signed i,r;
auto signed short flag;

if(DBG) printf("%s ","<Ctrl-F>");

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);
if(!(*b)) return(0x01);

r = cli_out(b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}
