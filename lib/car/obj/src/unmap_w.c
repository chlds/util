/* **** Notes

Unmap.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl unmap_w(signed short(**argp))) {

auto signed short *w;
auto signed r;

if(!argp) return(0x00);

w = (*argp);
embed_w_l(0x00,w);
rl(w);
w = (0x00);
*argp = (w);

return(0x01);
}
