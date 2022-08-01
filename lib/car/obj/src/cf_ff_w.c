/* **** Notes

Confirm the file format
*/


# define CAR_H
# define STDIO_H
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cf_ff_w(signed short(*di),signed char(*si))) {
auto signed short *w;
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
w = (di);
r = _wstati64(w,&stats);
if(!(r^(~0x00))) {
if(DBG) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file");
else printf("%s %Xh \n","<< Error at fn. _wstati64() with errno.",errno);
}
return(0x00);
}
r = ords(ff,si);
if(r<(ct_v_b(ff))) {
i = (_S_IFMT&(R(st_mode,stats)));
if(i&(*(r+(mode)))) return(0x01);
}
return(0x00);
}
