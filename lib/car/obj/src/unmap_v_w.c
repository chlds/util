/* **** Notes

Unmap
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unmap_v_w(signed(arg),signed short(**argp))) {
auto signed short *w;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
w = (*(--arg+(argp)));
// embed_w_l(0x00,w);
rl(w);
w = (0x00);
*(arg+(argp)) = (w);
return(0x01+(unmap_v_w(arg,argp)));
}
