/* **** Notes

Write.
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

signed(__cdecl wr_f(signed char(*di),signed char(*si))) {

auto struct _stat stats;
auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed access_right = (_O_BINARY|(_O_RDWR));

if(!di) return(0x00);
if(!si) return(0x00);

// check the file stat.
r = _stat(di,&stats);
if(!(r^(~0x00))) {
// if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
// else printf("%s \n","<< Error at fn. _stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

//*
r = trunc_f(0x00,di);
if(!r) {
printf("%s \n","<< Error at fn. trunc_f()");
return(0x00);
}
//*/

// open
fd = _open(di,access_right);
if(!(fd^(~0x00))) {
// printf("%s %Xh \n","<< Error at fn. _open() with errno",errno);
return(0x00);
}

r = wr_f_r(fd,si);
if(!r) printf("%s \n","<< Error at fn. wr_f_r()");

// close
i = (~0x00);
if(EQ(i,_close(fd))) {
// printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

return(r);
}
