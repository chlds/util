/* **** Notes

Retrieve a file descriptor to write.

Remarks:
Refer at fn. wr_ds_w.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_di_w(signed(fd),fl_t(*argp))) {

auto signed short *w;
auto signed r;
auto signed short flag;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

*(CLI_DI+(R(fd,*argp))) = (fd);

return(wr_ds_r(argp));
}
