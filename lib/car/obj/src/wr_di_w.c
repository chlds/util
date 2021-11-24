/* **** Notes

Retrieve a file descriptor to write.

Remarks:
Refer at fn. wr_ds_w.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_di_w(signed(fd),fl_t(*argp))) {

auto signed *d;
auto signed r;
auto signed short flag;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

d = (R(fd,*argp));
*(CLI_DI+(d)) = (fd);

return(wr_rd(d));
}
