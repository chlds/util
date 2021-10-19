/* **** Notes

Output characters in UTF-16 after decoding bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_io_b_r(signed(arg),ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);
OR(flag,CLI_FORCED);
NOT(flag);
page = (&(R(page,*argp)));
AND(*(CLI_BASE+(R(flag,*page))),flag);
OR(*(CLI_BASE+(R(flag,*page))),CLI_MORPH);
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

// monitor
r = cli_opt_b(argp,cli_mon_b);
if(!r) {
printf("%s \n","<< Error at fn. cli_opt_b()");
return(0x00);
}

if(!(DEL^(arg))) arg = (CTRL_D);
if(arg<(CTRL_KEYS)) {
if(!(EQ(HT,*b))) embed(0x00,b);
r = ctrl_fn_b(arg,argp);
if(!r) printf("%s \n","<< Error at fn. ctrl_fn_b()");
}
else {
r = cli_out_b(0x08,b);
if(!r) printf("%s \n","<< Error at fn. cli_out_b()");
}

b = (0x00);

return(r);
}
