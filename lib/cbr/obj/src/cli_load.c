/*

Load.

Along with C library

Remarks:
Refer at fn. cli_load_internal, fn. cli_bind_pages and fn. cli_concat_pages.
*/


# define CBR

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

signed(__cdecl cli_load(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto struct _stat wstat;

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
if(!p) return(0x01);

r = ct(p);
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) malloc(r);
if(!w) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = decode2w(r,w,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2w()");
return(0x00);
}

r = _wstat(w,&wstat);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _wstat()");
if(!(ENOENT^(errno))) printf("%s\n","No file..");
return(0x00);
}

R(modified,R(edit,*argp)) = (R(st_mtime,wstat));
R(size,R(edit,*argp)) = (R(st_size,wstat));

access = (_O_RDONLY|(_O_BINARY));
fd = _wopen(w,access);
if(!(fd^(~(0x00)))) {
printf("%s\n","<< Error at fn. _wopen()");
return(0x00);
}

R(fd,R(edit,*argp)) = (fd);
i = (0x00);

printf("\n");

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!p) return(0x00);
*p = (0x00);

// r = cli_load_old_internal(i,argp);
r = cli_load_internal(i,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_load_internal()");
return(0x00);
}

printf("\n");

if(CLI_IRR&(R(flag,*argp))) {
AND(R(flag,*argp),~(CLI_IRR));
printf("%s\n","<< Interrupted in loading..");
flag = (0x01);
}
else flag = (0x00);

r = _close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _close()");
return(0x00);
}

free(w);

if(flag) return(0x00);

return(0x01);
}
