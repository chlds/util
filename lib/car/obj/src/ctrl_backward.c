/*

Go backward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_backward(ty_t(*argp))) {

auto signed char *sym;
auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(EQ(b,*(CLI_BASE+(R(b,*rule))))) return(0x01);

r = ct_a_back(b);
if(!r) return(0x00);

b = (b+(0x01+(~r)));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
r = cat_b(&b,*(CLI_INDEX+(R(b,*rule))),*(CLI_BASE+(R(b,*(CLI_OFFSET+(R(rule,*page)))))),(void*) 0x00);
if(!r) return(0x00);

r = init_rule(0x01,CLI_OFFSET,&rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
rl(b);
return(0x00);
}

r = rule_b(0x00,CLI_OFFSET+(R(rule,*page)),b);
if(!r) {
printf("%s \n","<< Error at fn. rule_b()");
rl(b);
return(0x00);
}

embed(0x00,b);
rl(b);
b = (*(CLI_INDEX+(R(b,*rule))));
embed(0x00,b);
if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}
