/* **** Notes

Read.
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

signed(__cdecl readf(signed short(arg),signed(fd),void(*argp),signed(size))) {

auto signed(__cdecl*f)(signed(fd),void(*argp),unsigned(size));
auto signed(__cdecl*(fn[]))(signed(fd),void(*argp),unsigned(size)) = {
read,
_read,
0x00,
};

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);
if(size<(0x00)) return(0x00);

if(arg) arg = (0x01);

f = (*(arg+(fn)));

return(f(fd,argp,size));
}
