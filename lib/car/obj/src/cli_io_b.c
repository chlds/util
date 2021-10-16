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

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
// b = (*(CLI_INDEX+(R(b,*rule))));
// if(!b) return(0x00);

// append
r = append_rule_b(CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. append_rule_b()");
return(0x00);
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
if(!(DEL^(i))) i = (CTRL_D);
if(i<(CTRL_KEYS)) {
r = ctrl_fn_b(i,argp);
if(!r) {
printf("%s \n","<< Error at fn. ctrl_fn_b()");
OR(flag,CLI_ERROR);
// return(0x00);
}}

else {
r = cli_out_b(0x08,b);
if(!r) {
printf("%s \n","<< Error at fn. cli_out_b()");
OR(flag,CLI_ERROR);
// return(0x00);
}
// b = (r+(b));
// *(CLI_INDEX+(R(b,*rule))) = (b);
}

embed(0x00,b);
rl(b);
b = (0x00);

if(flag) OR(*(CLI_BASE+(R(flag,*argp))),CLI_ERROR);

return(0x01+(cli_io_b(argp)));
}
