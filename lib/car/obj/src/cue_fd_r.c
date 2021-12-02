/*

Cue.

Remarks:
Basically return a negative value on failure.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_fd_r(signed(*argp),signed(offset),signed(fd))) {

auto signed char *b;
auto signed d;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(offset<(0x01)) return(0x00);
if(fd<(0x00)) return(0x00);

d = (*argp);
if(d<(0x00)) return(0x00);

r = (offset);
offset = (offset+(0x01+(~d)));
if(0x00<(offset)) r = (d);
else {
AND(offset,0x00);
*argp = (r);
}

r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

*b = (0x00);
r = rd_b(fd,b,--r);
if(r<(0x00)) {
AND(r,0x00);
AND(*argp,0x00);
NOT(*argp);
}

*(r+(b)) = (0x00);
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x01+(cue_fd_r(argp,offset,fd)));
}
