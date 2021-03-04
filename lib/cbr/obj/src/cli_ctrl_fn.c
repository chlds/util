/* **** Notes

Output characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_fn(signed(arg),cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed DEL = (0x7F);

auto cli_text_t *text;
auto cli_rule_t *rule;
auto signed char *b;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!(arg^(DEL))) arg = (CTRL_D);
if(!(arg<(0x20))) return(0x00);
if(!argp) return(0x00);

text = (&(R(text,*argp)));

flag = (~CLI_REFRESH);
AND(R(flag,*text),flag);

/* overwrite a control character with an appendant */
rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

embed(0x00,b);

r = cli_restore(0x01/* append */,text);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_restore() \n");
return(0x00);
}

r = cli_ctrl_fn_internal(arg,argp);
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_ctrl_fn_internal(",arg,",argp)");
return(0x00);
}

// if(CLI_BR&(R(flag,R(ty,*argp)))) return(0x01);

return(r);
}
