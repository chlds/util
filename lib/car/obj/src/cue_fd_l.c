/*

Cue.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cue_fd_l(size_t(*argp),size_t(offset),signed(arg),signed(fd))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t s;

if(!argp) return(0x00);
if(offset<(0x01)) return(0x00);
if(arg<(0x01)) return(0x00);
if(fd<(0x00)) return(0x00);

AND(*argp,0x00);
r = (arg);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

while(0x01) {
if(!offset) break;
r = (arg);
s = (size_t) (arg);
if(s<(offset)) offset = (offset+(0x01+(~r)));
else {
r = (signed) (offset);
AND(offset,0x00);
}
*b = (0x00);
r = rd_b(fd,b,r);
ADD(*argp,r);
if(!r) AND(offset,0x00);
if(r<(0x00)) AND(offset,0x00);
}

*(arg+(b)) = (0x00);
embed_l(arg,b);
if(b) rl(b);
b = (0x00);

return(0x01);
}
