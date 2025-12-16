# define CAR_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl flushes(signed char(*argp/*path*/))) {
auto void *v;
auto signed(__cdecl*f)(signed(args),void(*argp));
auto signed char *perm = ("rdwr,binary");
// e.g., auto signed char *perm = ("creat,excl,append,trunc,rdwr,rdonly,wronly,binary,text,iread,iwrite");
if(!argp) return(0x00);
v = (0x00);
f = (flushing);
return(xt(perm,argp,v,f));
}
