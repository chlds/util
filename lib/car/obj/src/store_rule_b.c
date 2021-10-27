/* **** Notes

Store.

Remarks:
Refer at fn. rule_b, backup_rule_b and restore_rule_b.
Based on rule *(CLI_BASE+(R(rule,ty.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl store_rule_b(signed(di),signed(si),rule_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed r;
auto signed short flag;

if(di<(0x00)) return(0x00);
if(!(di<(CLI_RULE))) return(0x00);
if(!(si<(CLI_RULE))) return(0x00);
if(si<(0x00)) return(0x00);
if(!argp) return(0x00);

if(EQ(di,si)) return(0x01);

rule = (si+(argp));
b = (*(CLI_INDEX+(R(b,*rule))));
// if(!b) return(0x00);

rule = (di+(argp));
if(!(init_rule_b(0x01,rule))) return(0x00);

r = rule_b(0x00,rule,b);
if(!r) return(0x00);

return(0x01);
}
