# define CAR_H
# define TIME_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cfmtxt_utf_8_r(signed(args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto size_t z;
auto struct _stati64 stats;
auto signed mask = (0x7FFFFFFF);
if(!(0x00<(args))) return(0x00);
if(!argp) return(0x00);
b = (argp);
r = _stati64(b,&stats);
if(!(0x01+(r))) return(0x00);
z = (size_t)(R(st_size,stats));
if(!z) return(0x00);
if(z<(size_t)(args)) args = (signed)(mask&(z));
r = cfmtxt_utf_8_rr(args,argp);
if(r<(args)) return(0x00);
b = (0x00);
return(r);
}
