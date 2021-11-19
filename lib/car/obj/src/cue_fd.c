/*

Cue.

Remarks:
Return a negative value on failure.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_fd(signed(offset),signed(fd))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(offset<(0x00)) return(~0x00);
if(fd<(0x00)) return(~0x00);

if(!offset) return(0x00);

r = (offset);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

AND(flag,0x00);
*b = (0x00);
r = rd_b(fd,b,--r);
if(r<(0x00)) {
flag++;
AND(r,0x00);
}

*(r+(b)) = (0x00);
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);
if(flag) NOT(r);

return(r);
}
