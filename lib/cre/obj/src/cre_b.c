/* **** Notes

Create.
*/


# define DUAL_CONFIG_H
# define CRE_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl cre_b(signed char(*perm),signed char(*path))) {

auto void *argp;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed(__cdecl*f)(signed(arg),void(*argp));

if(!perm) return(0x00);
if(!path) return(0x00);

r = cmpr_part(&i,perm,"w");
b = ("creat,excl,rdwr,binary,iread");
if(!i) b = ("creat,excl,rdwr,binary,iread,iwrite");

argp = (0x00);
f = (0x00);

return(xt(b,path,argp,f));
}
