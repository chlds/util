/* **** Notes

Stat.

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

signed(__cdecl already_exist_b(size_t(*size),signed char(*argp))) {

auto struct _stat stats;
auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;

if(!size) return(0x00);
if(!argp) return(0x00);

AND(r,0x00);
*size = (size_t) (r);

r = _stat(argp,&stats);
if(!(r^(~0x00))) {
if(!(ENOENT^(errno))) NOT(*size);
if(DBG) printf("%s %Xh \n","<< Error at fn. _stat() with errno.",errno);
return(0x00);
}

*size = (R(st_size,stats));

return(0x01);
}
