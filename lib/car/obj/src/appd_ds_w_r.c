/* **** Notes

Retrieve a file descriptor to read
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl appd_ds_w_r(signed(fd),signed(**argp))) {
auto signed **v;
auto signed short *w;
auto signed char *perm = ("append,rdwr,binary");
if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);
v = (argp);
*(CLI_W+(v)) = (&fd);
w = (signed short(*)) (*(CLI_B+(v)));
v = (0x00);
return(xt_w(perm,w,argp,wr_ds_r));
}
