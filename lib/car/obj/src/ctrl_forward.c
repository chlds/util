/*

Go forward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_forward(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_OFFSET+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

r = ct_a(b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
r = store_rule_b(CLI_LEAD,CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. store_rule_b()");
return(0x00);
}

embed(0x00,b);
r = restore_rule_b(0x02,CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. restore_rule_b()");
return(0x00);
}

r = store_rule_b(CLI_OFFSET,CLI_LEAD,page);
if(!r) {
printf("%s \n","<< Error at fn. store_rule_b()");
return(0x00);
}

rule = (R(rule,*page));
r = init_rule(0x01,CLI_LEAD,&rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
return(0x00);
}

if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}