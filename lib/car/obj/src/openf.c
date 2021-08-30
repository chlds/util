/* **** Notes

Open.
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

signed(__cdecl openf(signed short(arg),signed char(*path),signed(mode),signed(permission))) {

auto signed(__cdecl*f)(signed char(*path),signed(mode),signed(permission));
auto signed(__cdecl*(fn[]))(signed char(*path),signed(mode),signed(permission)) = {
open,
_open,
0x00,
};

if(!path) return(0x00);

if(arg) arg = (0x01);

f = (*(arg+(fn)));

return(f(path,mode,permission));
}
