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

signed(__cdecl wr_s(signed char(*di),signed char(*si))) {

auto struct stat stats;
auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed access_right = (O_BINARY|(O_RDWR));

if(!di) return(0x00);
if(!si) return(0x00);

// check the file stat.
r = stat(di,&stats);
if(!(r^(~0x00))) {
// if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
// else printf("%s \n","<< Error at fn. stat()");
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
fd = open(di,access_right);
if(!(fd^(~0x00))) {
// printf("%s %Xh \n","<< Error at fn. open() with errno",errno);
return(0x00);
}

r = wr_s_r(fd,si);
if(!r) printf("%s \n","<< Error at fn. wr_s_r()");

// close
i = (~0x00);
if(EQ(i,close(fd))) {
// printf("%s \n","<< Error at fn. close()");
return(0x00);
}

return(r);
}
