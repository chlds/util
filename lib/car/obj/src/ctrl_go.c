/*

Leap forward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_go(ty_t(*argp))) {

auto signed char *sym;
auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

// page = (&(R(page,*argp)));
rule = (CLI_OFFSET+(R(rule,*argp)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

sym = (*(CLI_BASE+(R(b,R(config,*argp)))));
r = cue(sym,b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
if(!(cat_b(&b,*(CLI_INDEX+(R(b,*rule))),(void*) 0x00))) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

embed(0x00,*(CLI_INDEX+(R(b,*rule))));
rule = (R(rule,*argp));
r = restore_rule_b(0x02,CLI_OFFSET,rule);
if(!r) {
printf("%s \n","<< Error at fn. restore_rule_b()");
embed(0x00,b);
rl(b);
return(0x00);
}

r = init_rule(0x01,CLI_OFFSET,rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
embed(0x00,b);
rl(b);
return(0x00);
}

r = rule_b(0x00,CLI_OFFSET+(rule),b);
if(!r) {
printf("%s \n","<< Error at fn. rule_b()");
embed(0x00,b);
rl(b);
return(0x00);
}

embed(0x00,b);
rl(b);
if(!(es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
sym = (0x00);

return(0x01);
}
