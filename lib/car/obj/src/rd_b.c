/* **** Notes

Read bytes to the delimiter.

Remarks:
Call fn. rl later.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl rd_b(signed char(**di),signed char(*delim),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);

r = rd_b_r(di,delim,fd);
if(!(*di)) AND(r,0x00);

return(r);
}
