/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_after_opening_w(signed(fd),fl_t(*argp))) {

auto signed short *w;
auto signed r;
auto signed short flag;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

*(CLI_DI+(R(fd,*argp))) = (fd);

return(wr_after_reading(argp));
}
