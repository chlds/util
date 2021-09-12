/* **** Notes

Truncate.
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

signed(__cdecl trunc_f(signed char(*cache/* an extension for backups */),signed char(*path))) {

auto struct stat stats;
auto signed char *b;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed access_right = (O_BINARY|(O_RDWR|(O_TRUNC)));

if(!path) return(0x00);

// check the file stat.
r = stat(path,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

// backup
if(cache) {
r = backup_f(cache,path);
if(!r) {
printf("%s \n","<< Error at fn. backup_f()");
return(0x00);
}}

// open
fd = op_b(path,&access_right,(void*)0x00);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. op_b() with errno",errno);
return(0x00);
}

// close
i = (~0x00);
if(EQ(i,cl_b(fd))) {
printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}

return(0x01);
}
