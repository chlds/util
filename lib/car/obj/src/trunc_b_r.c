/* **** Notes

Truncate.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl trunc_b_r(signed char(*path))) {

auto signed char *b;
auto void *argp;
auto signed r;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed char *perm = ("trunc,rdwr,binary");

if(!path) return(0x00);

argp = (0x00);
f = (0x00);

return(xt(perm,path,argp,f));
}
