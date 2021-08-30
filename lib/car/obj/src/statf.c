/* **** Notes

Status.
//*/


# define CAR
# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl statf(signed short(arg),signed char(*path),void(*argp))) {

auto struct stat *s = (argp);
auto struct _stat *ss = (argp);
auto signed(__cdecl*f)(void(*path),void(*argp));
auto signed(__cdecl*(fn[]))(void(*path),void(*argp)) = {
stat,
_stat,
0x00,
};
auto void *(v[]) = {
s,
ss,
0x00,
};

if(!path) return(0x00);
if(!argp) return(0x00);

if(arg) arg = (0x01);

f = (*(arg+(fn)));

return(f(path,*(arg+(v))));
}
