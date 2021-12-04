/* **** Notes

Retrieve a file descriptor to read.

Remarks:
Refer at fn. wr_ds_b_r.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appd_ds_b_r(signed(fd),fl_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *perm = ("append,rdwr,binary");

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

*(CLI_SI+(R(fd,*argp))) = (fd);
b = (signed char(*)) (*(CLI_DI+(R(v,*argp))));

return(xt(perm,b,argp,wr_ds_r));
}
