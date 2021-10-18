/* **** Notes

Flush.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl flush_b(signed short(arg_b/* align */),signed(arg),rule_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto signed i,r;
auto signed short flag;

if(arg_b<(0x00)) return(0x00);
if(0x08<(arg_b)) return(0x00);
if(arg<(0x00)) return(0x00);
if(!(arg<(CLI_RULE))) return(0x00);
if(!argp) return(0x00);

b = (*(arg+(R(b,*argp))));
if(!b) return(0x00);

r = cli_outs_b(arg_b,b);
if(!r) {
/*
printf("%s \n","<< Error at fn. cli_outs_b()");
return(0x00);
//*/
}

return(embed(0x00,b));
}
