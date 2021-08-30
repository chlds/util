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

signed(__cdecl rd_f(signed char(**di),signed char(*si))) {

auto struct _stat stats;
auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed access_right = (_O_BINARY|(_O_RDWR));

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

// check the file stat.
r = _stat(si,&stats);
if(!(r^(~0x00))) {
// if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
// else printf("%s \n","<< Error at fn. _stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

// open
fd = _open(si,access_right);
if(!(fd^(~0x00))) {
// printf("%s %Xh \n","<< Error at fn. _open() with errno",errno);
return(0x00);
}

r = rd_f_r(di,fd);
if(!r) {
printf("%s \n","<< Error at fn. rd_f_r()");
if(*di) rl(*di);
*di = (0x00);
}

// close
i = (~0x00);
if(EQ(i,_close(fd))) {
// printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

return(r);
}
