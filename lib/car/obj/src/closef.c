/* **** Notes

Close.
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

signed(__cdecl closef(signed short(arg),signed(fd))) {

auto signed(__cdecl*f)(signed(fd));
auto signed(__cdecl*(fn[]))(signed(fd)) = {
close,
_close,
0x00,
};

if(fd<(0x00)) return(0x00);

if(arg) arg = (0x01);

f = (*(arg+(fn)));

return(f(fd));
}
