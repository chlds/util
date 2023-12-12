/* Notes

Store bytes

Remarks:
Code of line break: CRLF or LF
Create or truncate before storing bytes
*/


# define CAR_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl append(signed char(*di/* path */),signed char(*si/* contents */))) {
auto signed char **w;
auto signed char *b;
auto void *argp;
auto signed r;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed char *perm = ("append,rdwr,binary");
// e.g., auto signed char *perm = ("creat,excl,append,trunc,rdwr,rdonly,wronly,binary,text,iread,iwrite");
auto signed char *(sym[]) = {
"-",
"@",
0x00,
};
if(!di) return(0x00);
if(!si) return(0x00);
b = (si);
w = convt(sym,b);
if(!w) return(0x00);
argp = (void*)(w);
f = (storing);
r = xt(perm,di,argp,f);
relw(w);
w = (0x00);
return(r);
}
