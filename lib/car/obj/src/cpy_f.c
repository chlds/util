/* **** Notes

Copy.
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

signed(__cdecl cpy_f(signed char(*di),signed char(*si))) {

auto struct stat stats;
auto signed i,l,r;
auto signed short flag;
auto signed fd[0x02];
auto signed char *(b[0x02]);
auto signed access_right[] = {
(O_BINARY|(O_RDONLY)),
(O_CREAT|(O_EXCL|(O_BINARY|(O_WRONLY)))),
0x00,
};
auto signed permission[] = {
0x00,
(S_IWRITE|(S_IREAD)),
0x00,
};

if(!di) return(0x00);
if(!si) return(0x00);

*(CLI_SI+(b)) = (si);
*(CLI_DI+(b)) = (di);

// check the file stat.
r = stat(si,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

AND(flag,0x00);
r = stat(di,&stats);
if(!r) printf("%s %s \n","<< Could not be backed up because it already exists, file",di);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) OR(flag,0x01);
else printf("%s \n","<< Error at fn. stat()");
}

if(!flag) return(0x00);

if(DBG) printf("%d %s \n",R(st_size,stats),"bytes");

// open
i = (0x02);
while(i) {
--i;
r = op_b(*(i+(b)),i+(access_right),i+(permission));
*(i+(fd)) = (r);
if(!(r^(~0x00))) {
printf("%s %Xh ","<< Error at fn. op_b() with errno",errno);
printf("%s %Xh \n","and i is",i);
return(0x00);
}}

r = wr_rd(fd);
l = (r);
if(!r) printf("%s \n","<< Error at fn. wr_rd()");

// close
i = (0x02);
while(i) {
--i;
r = cl_b(*(i+(fd)));
if(!(r^(~0x00))) {
printf("%s %Xh ","<< Error at fn. cl_b() with errno",errno);
printf("%s %Xh \n","and i is",i);
return(0x00);
}}

return(l);
}
