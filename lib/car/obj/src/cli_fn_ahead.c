/*

Go ahead.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_ahead(cli_property_t(*argp))) {

auto signed char *b;
auto cli_text_t *text;
auto cli_rule_t *rule;
auto coord_t coord;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_BASE+(R(b,*rule))));
*(CLI_INDEX+(R(b,*rule))) = (b);

/*
r = coord_beta(CLI_IN,CLI_RULE,&coord);
if(!r) return(0x00);
AND(*(CLI_BASE+(R(x,coord))),0x00);
r = coord_beta(CLI_OUT,CLI_BASE,&coord);
if(!r) return(0x00);
//*/

return(es(CTRL_A));
}
