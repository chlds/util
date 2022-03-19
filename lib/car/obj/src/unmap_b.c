/* **** Notes

Unmap.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl unmap_b(signed char(**argp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);

b = (*argp);
embed_l(0x00,b);
rl(b);
b = (0x00);
*argp = (b);

return(0x01);
}
