/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Create, append or truncate.
//*/


# define CAR
# include <stdio.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl str_w(signed(arg/* code of line break */),signed char(*perm),signed short(*di/* path */),signed char(*si/* contents */))) {

auto signed char *b;
auto void *argp;
auto fl_t fl;
auto signed i,r;
auto signed short flag;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");
auto signed(__cdecl*f)(signed(arg),void(*argp));
// e.g., auto signed char *perm = ("creat,excl,append,trunc,rdwr,rdonly,wronly,binary,text,iread,iwrite");

if(!perm) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(init_fl(0x00,&fl))) return(0x00);

b = (0x00);
if(arg) {
b = (lf);
if(!(EQ(LF,arg))) b = (crlf);
}

*(CLI_OFFSET+(R(v,fl))) = (void*) (b);
*(CLI_BASE+(R(v,fl))) = (void*) (si);

argp = (void*) (&fl);
f = (str_b_r);

return(xt_w(perm,di,argp,f));
}
