/*

Type a bullet (i.e., 0x2022) in UTF-8.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_bullet(ty_t(*argp))) {

auto signed char *b;
auto signed char *p;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

// type a bullet in three bytes
r = (0x01+(0x03));
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

p = (b);
*p = (0xE0|0x02);
p++;
*p = (0x80|0x00);
p++;
*p = (0x80|0x20|0x02);
p++;
*p = (0x00);

if(!(rule_b(0x01,rule,b))) {
embed(0x00,b);
rl(b);
b = (0x00);
return(0x00);
}

embed(0x00,b);
rl(b);
b = (*(CLI_INDEX+(R(b,*rule))));
r = cli_out_b(0x08,b);
if(!r) return(0x00);

b = (r+(b));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}
