/*

Press <Ctrl-K> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_k(cli_property_t(*argp))) {

auto signed char *b;
auto cli_text_t *text;
auto cli_rule_t *rule;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) printf("%s ","<Ctrl-K>");

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

embed(0x00,b);
b = (0x00);

return(0x01);
}
