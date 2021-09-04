/* **** Notes

Write.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl write_pages(signed char(*di),page_t(*si))) {

auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto struct stat stats;
auto signed access_right = (O_BINARY|(O_WRONLY));

if(!di) return(0x00);
if(!si) return(0x00);

flag = (*(CLI_BASE+(R(flag,*si))));
if(!(CLI_INIT&(flag))) return(0x00);

// check the file stat.
r = stat(di,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

fd = open(di,access_right);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. open() with errno",errno);
return(0x00);
}

r = wr_pages(fd,si);
if(!r) printf("%s \n","<< Error at fn. wr_pages()");

i = (~0x00);
if(EQ(i,close(fd))) {
printf("%s %Xh \n","<< Error at fn. close() with errno",errno);
return(0x00);
}

return(r);
}
