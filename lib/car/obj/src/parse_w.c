/* **** Notes

Parse
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl parse_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {
auto signed char *perm = ("rdonly,binary");
// auto signed(__cdecl*f)(signed(arg),void(*argp));
if(!path) return(0x00);
if(!argp) return(0x00);
if(!f) return(0x00);
return(xt_w(perm,path,argp,f));
}
