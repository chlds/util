/*

Delete.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_del(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

// page = (&(R(page,*argp)));
rule = (CLI_OFFSET+(R(rule,*argp)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

r = ct_a(b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
if(!(cat_b(&b,*(CLI_INDEX+(R(b,*rule))),(void*) 0x00))) return(0x00);
if(!(init_rule_b(0x01,rule))) {
embed(0x00,b);
rl(b);
return(0x00);
}
if(!(append_rule_b(rule,b))) {
embed(0x00,b);
rl(b);
return(0x00);
}

embed(0x00,b);
rl(b);
b = (0x00);

return(0x01);
}
