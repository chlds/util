/* **** Notes

Unmap
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unmap_v_b(signed(arg),signed char(**argp))) {
auto signed char *b;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
b = (*(--arg+(argp)));
// embed_l(0x00,b);
rl(b);
b = (0x00);
*(arg+(argp)) = (b);
return(0x01+(unmap_v_b(arg,argp)));
}
