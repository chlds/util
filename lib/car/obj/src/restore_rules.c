/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl restore_rules(signed(arg/* append or.. */),page_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) return(0x00);

rule = (CLI_INDEX+(R(rule,*argp)));
if(!arg) {
r = init_rule_b(0x01,rule);
if(!r) return(0x00);
}

b = (*(CLI_BASE+(R(b,*rule))));
rule = (CLI_BASE+(R(rule,*argp)));
r = append_rule_b(rule,b);
if(!r) return(0x00);

rule = (CLI_INDEX+(R(rule,*argp)));
r = init_rule_b(0x01,rule);
if(!r) return(0x00);

rule = (CLI_BASE+(R(rule,*argp)));
b = (*(CLI_INDEX+(R(b,*rule))));
rule = (CLI_INDEX+(R(rule,*argp)));
r = append_rule_b(rule,b);
if(!r) return(0x00);

return(0x01);
}
