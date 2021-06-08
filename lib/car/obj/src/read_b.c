/* **** Notes

Read bytes to the delimiter.

Remarks:
Call fn. rl later.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl read_b(signed(fd),signed char(delim),signed char(**argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(*argp) return(0x00);

flag = (~0x00);
r = read_b_r(fd,delim,&flag,argp);

if(flag) {
embed(0x00,*argp);
if(*argp) rl(*argp);
*argp = (0x00);
}

return(r);
}
