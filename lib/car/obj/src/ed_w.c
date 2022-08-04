/* **** Notes

Edit
*/


# define CAR_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl ed_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {
auto signed char *perm = ("rdwr,binary");
// auto signed(__cdecl*f)(signed(arg),void(*argp));
if(!path) return(0x00);
if(!argp) return(0x00);
if(!f) return(0x00);
if(!(already_in_w(path))) return(0x00);
return(xt_w(perm,path,argp,f));
}
