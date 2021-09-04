/* **** Notes

Read.
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

signed(__cdecl read_pages(page_t(*di),signed char(*si))) {

auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto struct stat stats;
auto signed access_right = (O_BINARY|(O_RDONLY));

if(!di) return(0x00);
if(!si) return(0x00);

// check the file stat.
r = stat(si,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

r = init_pages(0x00,di);
if(!r) {
printf("%s \n","<< Error at fn. init_pages()");
return(0x00);
}

fd = open(si,access_right);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. open() with errno",errno);
return(0x00);
}

r = rd_pages(di,fd);
if(!r) printf("%s \n","<< Error at fn. rd_pages()");

i = (~0x00);
if(EQ(i,close(fd))) {
printf("%s %Xh \n","<< Error at fn. close() with errno",errno);
return(0x00);
}

return(r);
}
