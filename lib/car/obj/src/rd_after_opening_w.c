/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl rd_after_opening_w(signed(fd),fl_t(*argp))) {

auto signed short *w;
auto signed r;
auto signed short flag;
auto signed char *perm = ("creat,excl,rdwr,binary,iread,iwrite");

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

*(CLI_SI+(R(fd,*argp))) = (fd);
w = (signed short(*)) (*(CLI_DI+(R(v,*argp))));

return(xt_w(perm,w,argp,wr_after_opening_w));
}
