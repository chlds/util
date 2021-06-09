/* **** Notes

Read bytes to the delimiter.

Remarks:
Call fn. rl later.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl read2_b(signed char(**di),signed char(*delim),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);

flag = (~0x00);
r = read2_b_r(di,&flag,delim,fd);

if(flag) {
embed(0x00,*di);
if(*di) rl(*di);
*di = (0x00);
}

return(r);
}
