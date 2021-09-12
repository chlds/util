/* **** Notes

Store bytes.

Remarks:
Put (non 0x0A) for CRLF or (0x0A) for LF to insert a line break, or (0x00) not to at the linebreak.
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

signed(__cdecl store_b(signed short(linebreak),signed(access_right),signed(permission),signed char(*b),signed char(*path))) {

auto struct stat stats;
auto signed char *br;
auto signed char *p;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");

if(!b) return(0x00);
if(!path) return(0x00);

AND(flag,0x00);

// check the file stat.
r = stat(path,&stats);
if(!(r^(~0x00))) {
if(ENOENT^(errno)) {
printf("%s \n","<< Error at fn. stat()");
return(0x00);
}}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

/*
if(SIZE_LIMITED<(R(st_size,stats))) {
printf("%s %d%s \n","<< Exceed size",SIZE_LIMITED,"bytes..");
return(0x00);
}
//*/

// open
fd = op_b(path,&access_right,&permission);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. op_b() with errno",errno);
return(0x00);
}

// write
r = wr_b(fd,b,ct(b));
if(!(r^(~0x00))) flag++;
if(!r) flag++;
if(flag) {
printf("%s %Xh \n","<< Error at fn. wr_b() with errno",errno);
return(0x00);
}
// also to insert a line break or not to..
if(linebreak) {
AND(flag,0x00);
if(!(0x0A^(linebreak))) br = (lf);
else br = (crlf);
r = wr_b(fd,br,ct(br));
if(!(r^(~0x00))) flag++;
if(!r) flag++;
if(flag) {
printf("%s %Xh \n","<< Error at fn. wr_b() with errno",errno);
return(0x00);
}}

// close
r = cl_b(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}

return(0x01);
}
