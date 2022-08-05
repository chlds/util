/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_rule_v_b_r(signed(arg),signed char(**argp))) {
auto signed char *b;
if(!(--arg)) return(0x00);
argp++;
if(!argp) return(0x00);
b = (0x00);
*argp = (b);
return(0x01+(init_rule_v_b_r(arg,argp)));
}
