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
r = wr_trunc_b(0x00,di);
if(!r) {
printf("%s \n","<< Error at fn. wr_trunc_b()");
return(0x00);
}
//*/

// open
fd = op_b(di,&access_right,(void*)0x00);
if(!(fd^(~0x00))) {
// printf("%s %Xh \n","<< Error at fn. op_b() with errno",errno);
return(0x00);
}

r = wr_s_r(fd,si);
if(!r) printf("%s \n","<< Error at fn. wr_s_r()");

// close
i = (~0x00);
if(EQ(i,cl_b(fd))) {
// printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}

return(r);
}
