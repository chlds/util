/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_restore(signed(arg),cli_text_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_rule_t *rule;
auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

rule = (CLI_OFFSET+(R(rule,*argp)));
if(!rule) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
rule = (CLI_BASE+(R(rule,*argp)));

r = cli_restore_rule(b,rule);
if(!r) return(0x00);

if(arg) {
rule = (CLI_OFFSET+(R(rule,*argp)));
r = cli_init_rule(arg,rule);
if(!r) return(0x00);
}

return(0x01);
}
