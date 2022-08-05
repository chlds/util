/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_v_b(signed(cached),signed(arg),signed char(**argp))) {
auto signed char *b;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(cached) {
embed(0x00,*argp);
rl(*argp);
}
b = (0x00);
*argp = (b);
argp++;
--arg;
return(0x01+(init_v_b(cached,arg,argp)));
}
