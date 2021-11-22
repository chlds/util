/* **** Notes

Duplicate.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_ds_r(fl_t(*argp))) {

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

r = wr_ds_r_r(buff,b,argp);

embed(buff,b);
rl(b);
b = (0x00);

return(r);
}
