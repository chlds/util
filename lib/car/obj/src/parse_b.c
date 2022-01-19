/* **** Notes

Parse.

Remarks:
Code of line break: CRLF, LF or (0x00).
//*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl parse_b(signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *perm = ("rdonly,binary");
// auto signed(__cdecl*f)(signed(arg),void(*argp));

if(!path) return(0x00);
if(!argp) return(0x00);
if(!f) return(0x00);

return(xt(perm,path,argp,f));
}
