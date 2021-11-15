/* **** Notes

Create.

Remarks:
Refer at fn. cre_b.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cre_w(signed char(*perm),signed short(*path))) {

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

return(xt_w(b,path,argp,f));
}
