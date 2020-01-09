/*

Save.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cl_io_beta.c
*/


# define CLI_MACRO

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_save(signed short(update_flag),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short *cur,*w;
auto signed char *p;
auto signed fd;
auto signed access;
auto signed permission;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (R(file,R(edit,*argp)));
if(!p) return(0x00);


r = ct(p);
r++;
r = (r*(sizeof(signed short)));
w = (signed short(*)) malloc(r);
if(!w) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
cur = (w);
while(0x01) {
if(!(*p)) break;
r = decode2uni(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}
*cur = (i);
cur++;
p = (r+(p));
}
*cur = (0x00);


permission = (_S_IREAD|(_S_IWRITE));

if(!update_flag) access = (_O_CREAT|(_O_EXCL|(_O_WRONLY|(_O_BINARY))));

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
OR(R(flag,*argp),CLI_ALREADY_EXIST);
return(0x01);
}
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
