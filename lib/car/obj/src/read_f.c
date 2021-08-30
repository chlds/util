/* **** Notes

Read bytes to the delimiter.

Remarks:
Call fn. rl later.
Refer at fn. rm_crlf to replace line breaks with the null character.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl read_f(signed char(**di),signed char(delim),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);

AND(flag,0x00);
r = read_f_r(di,&flag,delim,fd);
if(!flag) {
embed(0x00,*di);
if(*di) rl(*di);
*di = (0x00);
}

return(r);
}
