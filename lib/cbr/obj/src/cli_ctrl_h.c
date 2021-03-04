/*

Press <Ctrl-H> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_h(cli_property_t(*argp))) {

auto signed char *b;
auto cli_rule_t *rule;
auto cli_text_t *text;
auto coord_t coord;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) printf("%s ","<Ctrl-H>");

text = (&(R(text,*argp)));
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(EQ(b,*(CLI_BASE+(R(b,*rule))))) {
flag = (~CLI_REFRESH);
AND(R(flag,*text),flag);
return(0x01);
}

r = ct_back(&i,b);
if(!r) return(0x00);

b = (b+(0x01+(~i)));
*(CLI_INDEX+(R(b,*rule))) = (b);
embed(0x00,b);
b = (0x00);

r = coord_beta(CLI_IN,CLI_RULE,&coord);
if(!r) return(0x00);

AND(*(CLI_BASE+(R(x,coord))),0x00);
r = coord_beta(CLI_OUT,CLI_BASE,&coord);
if(!r) return(0x00);

r = cli_outs(*(CLI_BASE+(R(b,*rule))));

return(0x01);
}
