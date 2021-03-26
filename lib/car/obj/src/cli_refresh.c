/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_refresh(cli_text_t(*argp))) {

auto signed char *b;
auto cli_rule_t *rule;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

rule = (CLI_BASE+(R(rule,*argp)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

r = cli_coord_outs(R(align,*argp),b);
// if(!r) return(0x00);

if(!(cli_es(CTRL_K))) return(0x00);
if(!(cli_es(CTRL_A))) return(0x00);

embed(0x00,b);
b = (*(CLI_BASE+(R(b,*rule))));
if(!b) return(0x00);

r = cli_coord_outs(R(align,*argp),b);
// if(!r) return(0x00);

return(cli_restore(0x01/* append */,argp));
}
