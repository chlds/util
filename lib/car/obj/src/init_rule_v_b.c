/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_rule_v_b(signed(cached),signed(arg),signed char(**argp))) {
auto signed char *b;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(cached) {
b = (*argp);
embed(0x00,b);
rl(b);
}
b = (0x00);
*argp = (b);
return(0x01+(init_rule_v_b_r(arg,argp)));
}
