/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Append.
//*/


# define CAR
# include <stdio.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl appd_b(signed(arg/* code of line break */),signed char(*di/* path */),signed char(*si/* contents */))) {

auto void *argp;
auto signed char *b;
auto fl_t fl;
auto signed i,r;
auto signed short flag;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");
auto signed char *perm = ("creat,append,rdwr,binary,iread,iwrite");
auto signed(__cdecl*f)(signed(arg),void(*argp));

if(!di) return(0x00);
if(!si) return(0x00);

if(!(init_fl(&fl))) return(0x00);

b = (0x00);
if(arg) {
b = (lf);
if(!(EQ(LF,arg))) b = (crlf);
}

*(CLI_OFFSET+(R(v,fl))) = (void*) (b);
*(CLI_BASE+(R(v,fl))) = (void*) (si);

argp = (void*) (&fl);
f = (appd_b_r);

return(xt(perm,di,argp,f));
}
