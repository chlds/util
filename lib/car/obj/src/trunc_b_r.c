/* **** Notes

Truncate.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl trunc_b_r(signed char(*path))) {

auto void *argp;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed char *perm = ("trunc,rdwr,binary");

if(!path) return(0x00);

argp = (0x00);
f = (0x00);

return(xt(perm,path,argp,f));
}
