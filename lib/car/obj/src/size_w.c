/* Notes

Return (~0x00) on failure
*/


# define CAR_H
# define TIME_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl size_w(signed short *argp)) {
auto signed short *w;
auto signed r;
auto size_t s;
auto struct _stati64 stats;
auto size_t mask = (0xFFFFFFF);
auto signed maxm = (0xFFFFFFF);
if(!argp) return(0x00);
w = (argp);
/*
r = ct_w(w);
if(!(0x00<(r))) return(0x00);
if('/'^(*(--r+(w)))) return(0x00);
//*/
r = _wstati64(w,&stats);
if(!(0x01+(r))) return(r);
s = (R(st_size,stats));
if(!(s<(mask))) return(maxm);
r = (signed)(mask&(s));
return(r);
}
