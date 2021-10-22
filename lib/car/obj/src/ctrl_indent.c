/*

Indent.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_indent(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(*b) return(0x00);

r = rule_b(0x01,rule,"\t");
if(!r) {
printf("%s \n","<< Error at fn. rule_b()");
return(0x00);
}

b = (*(CLI_INDEX+(R(b,*rule))));
b = (b+(cli_out_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);

return(0x01);
}
