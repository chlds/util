/* **** Notes

Remove
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_b_r(signed(n),signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!n) return(0x00);
if(!arg) return(0x00);
if(!argp) return(0x00);
b = (arg+(argp));
r = ct_a_back(b);
arg = (arg+(0x01+(~r)));
b = (arg+(argp));
r = ct_a(b);
if(!r) return(0x00);
embed(0x00,b);
b = (0x00);
return(0x01+(rm_b_r(--n,arg,argp)));
}
