/* **** Notes

Backup.

Remarks:
Refer at fn. rule_b, store_rule_b, and restore_rule_b.
Based on rule *(CLI_BASE+(R(rule,R(page,ty.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl backup_rule_b(signed(arg),page_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(!(arg<(CLI_RULE))) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(b) return(0x00);

rule = (CLI_BASE+(R(rule,*argp)));
b = (*(CLI_BASE+(R(b,*rule))));
// if(!b) return(0x00);

rule = (arg+(R(rule,*argp)));
if(!(init_rule_b(0x01,rule))) return(0x00);

r = rule_b(0x00,rule,b);
if(!r) return(0x00);

return(0x01);
}
