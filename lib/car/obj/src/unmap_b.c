/* **** Notes

Unmap
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unmap_b(signed char(**argp))) {
auto signed char *b;
if(!argp) return(0x00);
b = (*argp);
embed_l(0x00,b);
rl(b);
b = (0x00);
*argp = (b);
return(0x01);
}
