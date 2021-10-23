/* **** Notes

Output characters in UTF-16 after decoding bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_io_b(ty_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) return(0x00);
if(CLI_ERROR&(flag)) return(0x00);
if(CLI_QUIT&(flag)) return(0x00);
if(CLI_BR&(flag)) return(0x00);

AND(flag,0x00);
page = (&(R(page,*argp)));
if(CLI_MORPH&(*(CLI_BASE+(R(flag,*page))))) OR(flag,0x01);
if(CLI_FORCED&(*(CLI_BASE+(R(flag,*page))))) INC(flag);

r = restore_rule_b(flag,CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. restore_rule_b()");
return(0x00);
}

r = store_rule_b(CLI_OFFSET,CLI_BASE,page);
if(!r) {
printf("%s \n","<< Error at fn. store_rule_b()");
return(0x00);
}

rule = (CLI_BASE+(R(rule,*page)));
// b = (*(CLI_INDEX+(R(b,*rule))));
// if(!b) return(0x00);

r = cli_flush(0x08,rule);
if(!r) {
/*
printf("%s \n","<< Error at fn. cli_flush()");
return(0x00);
//*/
}

// monitor
r = cli_opt_b(argp,cli_mon_b);
if(!r) {
printf("%s \n","<< Error at fn. cli_opt_b()");
return(0x00);
}

b = (0x00);
r = cli_opt_b(&b,cli_i_b);
if(!r) {
printf("%s \n","<< Error at fn. cli_opt_b()");
return(0x00);
}

AND(i,0x00);
if(!(decode_keys(r,&i,b))) {
printf("%s \n","<< Error at fn. decode_keys()");
embed(0x00,b);
rl(b);
b = (0x00);
return(0x00);
}

AND(flag,0x00);
if(!(rule_b(0x01,rule,b))) OR(flag,0x01);
if(!flag) {
r = cli_io_b_r(i,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_io_b_r()");
OR(flag,CLI_ERROR);
}}

embed(0x00,b);
rl(b);
b = (0x00);
if(flag) OR(*(CLI_BASE+(R(flag,*argp))),CLI_ERROR);

return(0x01+(cli_io_b(argp)));
}
