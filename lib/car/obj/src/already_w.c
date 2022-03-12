/* **** Notes

Already in existence or under..

Remarks:
CR (0x0D)
LF (0x0A)
//*/


# define CAR
# include <stdio.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl already_w(size_t(*size),signed short(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;
auto struct _stati64 stats;

if(!size) return(0x00);
if(!argp) return(0x00);

/*
r = ct_w(argp);
if(r<(0x01)) return(0x00);
if('/'^(*(--r+(argp)))) return(0x00);
//*/

AND(r,0x00);
*size = (size_t) (r);
r = _wstati64(argp,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) NOT(*size);
if(DBG) {
printf("%s %Xh \n","<< Error at fn. _wstati64() with errno.",errno);
if(EQ(EINVAL,errno)) printf("%s \n","Error: An invalid parameter");
}
return(0x00);
}

*size = (size_t) (R(st_size,stats));

return(0x01);
}
