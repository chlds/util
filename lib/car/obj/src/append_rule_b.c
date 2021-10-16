/* **** Notes

Append.

Remarks:
Based on one-byte characters
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl append_rule_b(signed(arg),page_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed r;

if(arg<(0x00)) return(0x00);
if(!(arg<(CLI_RULE))) return(0x00);
if(!argp) return(0x00);

rule = (CLI_BASE+(R(rule,*argp)));
b = (*(CLI_INDEX+(R(b,*rule))));
// if(!b) return(0x00);

rule = (arg+(R(rule,*argp)));
r = rule_b(rule,b);
if(!r) return(0x00);

return(0x01);
}
