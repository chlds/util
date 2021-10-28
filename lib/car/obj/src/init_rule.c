/* **** Notes

Initialise

Remarks:
Refer at fn. init_rule_b.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl init_rule(signed short(flag),signed(arg),rule_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

if(arg<(CLI_RULE)) r = init_rule_b(flag,arg+(argp));
// if(!(arg<(CLI_RULE))) {
else {
i = (CLI_RULE);
while(i) {
r = init_rule_b(flag,--i+(argp));
if(!r) break;
}}

return(r);
}
