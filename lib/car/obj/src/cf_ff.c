/* **** Notes

Confirm the file format.
*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl cf_ff(signed char(*di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto size_t s;
auto struct _stati64 stats;
auto signed char *(ff[]) = {
// "fifo",
"chr",
"dir",
// "blk",
"reg",
// "lnk",
// "sock",
0x00,
};
auto signed mode[] = {
// _S_IFFIFO,
_S_IFCHR,
_S_IFDIR,
// _S_IFBLK,
_S_IFREG,
// _S_IFLNK,
// _S_IFSOCK,
0x00,
};

if(!di) return(0x00);
if(!si) return(0x00);

b = (di);
r = _stati64(b,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file");
else printf("%s %Xh \n","<< Error at fn. _stati64() with errno.",errno);
return(0x00);
}

r = ords(ff,si);
if(r<(ct_vb(ff))) {
i = (_S_IFMT&(R(st_mode,stats)));
if(i&(*(r+(mode)))) return(0x01);
}

return(0x00);
}
