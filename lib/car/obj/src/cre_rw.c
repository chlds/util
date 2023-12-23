# define CAR_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cre_rw(signed char *argp)) {
auto signed char *b;
auto void *p;
auto signed r;
auto signed(__cdecl*f)(signed(s),void(*p));
auto signed char *perm = ("creat,excl,rdwr,binary,iread,iwrite");
// e.g., auto signed char *perm = ("creat,excl,append,trunc,rdwr,rdonly,wronly,binary,text,iread,iwrite");
if(!argp) return(0x00);
b = (argp);
p = (0x00);
f = (0x00);
r = xt(perm,b,p,f);
b = (0x00);
return(r);
}
