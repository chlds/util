/* **** Notes

Truncate.
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

signed(__cdecl trunc_f(signed char(*path))) {

auto struct _stat stats;
auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed access_right = (_O_BINARY|(_O_RDWR|(_O_TRUNC)));

if(!path) return(0x00);

// check the file stat.
r = _stat(path,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. _stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

// open
fd = _open(path,access_right);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. _open() with errno",errno);
return(0x00);
}

// close
i = (~0x00);
if(EQ(i,_close(fd))) {
printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

return(0x01);
}
