/* **** Notes

Edit.

Remarks:
Code of line break: CRLF, LF or (0x00).
//*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl ed_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t size;
auto signed char *perm = ("rdwr,binary");
// auto signed(__cdecl*f)(signed(arg),void(*argp));

if(!path) return(0x00);
if(!argp) return(0x00);
if(!f) return(0x00);

// check the file stat.
r = already_w(&size,path);
if(!r) {
// if(EQ(size,~0x00)) printf("%s \n","<< No file");
// else printf("%s \n","<< Error at fn. already_w()");
return(0x00);
}

return(xt_w(perm,path,argp,f));
}
