/*

Save as.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cl_io_beta.c
*/


# define CBR

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config.h"

signed(__cdecl cli_save_as(signed short(update),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short *cur,*w;
auto signed char *p;
auto signed fd;
auto signed access;
auto signed permission;
auto signed i,r;
auto signed short surrog;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (R(file,R(edit,*argp)));
if(!p) return(0x00);


r = ct(p);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) malloc(r);
if(!w) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
cur = (w);
while(0x01) {
if(!(*p)) break;
r = decode_b(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode_b()");
return(0x00);
}
//* save file names in Unicode format
if(0x03<(r)) {
r = decode_surrogate_first(&surrog,i);
if(!r) {
printf("%s\n","<< Error at fn. decode_surrogate_first()");
return(0x00);
}
*cur = (surrog);
cur++;
r = decode_surrogate_second(&surrog,i);
if(!r) {
printf("%s\n","<< Error at fn. decode_surrogate_second()");
return(0x00);
}
i = (signed) (surrog);
r = (0x04);
}
//*/
*cur = (i);
cur++;
p = (r+(p));
}
*cur = (0x00);


permission = (_S_IREAD|(_S_IWRITE));

if(!update) access = (_O_CREAT|(_O_EXCL|(_O_WRONLY|(_O_BINARY))));

else {
access = (_O_CREAT|(_O_TRUNC|(_O_WRONLY|(_O_BINARY))));
fd = _wopen(w,access,permission);
if(!(fd^(~(0x00)))) {
printf("%s\n","<< Error at fn. _wopen()");
return(0x00);
}
r = _close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _close()");
return(0x00);
}
access = (_O_CREAT|(_O_APPEND|(_O_WRONLY|(_O_BINARY))));
}

fd = _wopen(w,access,permission);
if(!(fd^(~(0x00)))) {
if(!(EEXIST^(errno))) {
OR(R(flag,*argp),CLI_ALREADY);
return(0x01);
}
OR(R(flag,R(commandline,*argp)),CLI_IRR);
printf("%s\n","<< Error at fn. _wopen()");
return(0x00);
}

r = cli_write(fd,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_write()");
return(0x00);
//*/
}

r = _close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _close()");
return(0x00);
}

OR(R(flag,*argp),CLI_OVERWRITE);

free(w);

return(0x01);
}
