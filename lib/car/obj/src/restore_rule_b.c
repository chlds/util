/* **** Notes

Restore.

Remarks:
Refer at fn. rule_b, store_rule_b, and backup_rule_b.
Based on rule *(CLI_BASE+(R(rule,ty.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl restore_rule_b(signed short(arg_b),signed(arg),rule_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(!(arg<(CLI_RULE))) return(0x00);
if(!argp) return(0x00);

rule = (arg+(argp));
b = (*(CLI_BASE+(R(b,*rule))));
// if(!b) return(0x00);

rule = (CLI_BASE+(argp));
r = rule_b(arg_b,rule,b);
if(!r) return(0x00);

return(0x01);
}
