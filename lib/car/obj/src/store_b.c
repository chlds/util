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

/* **** DATA, BSS and STACK */
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");

auto struct _stat stats;
auto signed char *br;
auto signed char *p;
auto signed fd;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!path) return(0x00);

AND(flag,0x00);

// check the file stat.
r = _stat(path,&stats);
if(!(r^(~0x00))) {
if(ENOENT^(errno)) {
printf("%s \n","<< Error at fn. _stat()");
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
fd = _open(path,access_right,permission);
if(!(fd^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. _open() with errno",errno);
return(0x00);
}

// write
r = _write(fd,b,ct(b));
if(!(r^(~0x00))) flag++;
if(!r) flag++;
if(flag) {
printf("%s %Xh \n","<< Error at fn. _write() with errno",errno);
return(0x00);
}
// also to insert a line break or not to..
if(linebreak) {
AND(flag,0x00);
if(!(0x0A^(linebreak))) br = (lf);
else br = (crlf);
r = _write(fd,br,ct(br));
if(!(r^(~0x00))) flag++;
if(!r) flag++;
if(flag) {
printf("%s %Xh \n","<< Error at fn. _write() with errno",errno);
return(0x00);
}}

// close
r = _close(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

return(0x01);
}
