/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_after_reading(fl_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed buff = (100*(1024));

if(!argp) return(0x00);

r = (buff);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = wr_after_reading_r(buff,b,argp);

embed(buff,b);
rl(b);
b = (0x00);

return(r);
}
