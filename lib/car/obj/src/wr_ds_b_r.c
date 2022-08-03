/* **** Notes

Retrieve a file descriptor to read
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl wr_ds_b_r(signed(fd),signed(**argp))) {
auto signed **v;
auto signed char *b;
auto signed char *perm = ("creat,excl,rdwr,binary,iread,iwrite");
if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);
v = (argp);
*(CLI_W+(v)) = (&fd);
b = (signed char(*)) (*(CLI_B+(v)));
v = (0x00);
return(xt(perm,b,argp,wr_ds_r));
}
