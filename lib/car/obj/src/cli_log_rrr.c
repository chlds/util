/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Append.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_log_rrr(signed short(*di/* path */),signed char(*si/* contents */))) {

auto signed char *b;
auto void *argp;
auto fl_t fl;
auto signed r;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");
auto signed char *perm = ("creat,append,rdwr,binary,iread,iwrite");
auto signed(__cdecl*f)(signed(arg),void(*argp));

if(!di) return(0x00);
if(!si) return(0x00);

if(!(init_fl(0x00,&fl))) return(0x00);
*(CLI_OFFSET+(R(v,fl))) = (void*) (lf);
*(CLI_BASE+(R(v,fl))) = (void*) (si);

argp = (void*) (&fl);
f = (str_b_r);

return(xt_w(perm,di,argp,f));
}
