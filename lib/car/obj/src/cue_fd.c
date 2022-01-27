/*

Cue.

Remarks:
Return a negative value on failure.
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cue_fd(size_t(offset),signed(fd))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t s;
auto size_t ss;
auto signed buff = (1024*(1024));

if(offset<(0x00)) return(~0x00);
if(fd<(0x00)) return(~0x00);
if(!offset) return(0x00);

AND(s,0x00);
r = cue_fd_r(&s,offset,buff,fd);
if(!r) return(~0x00);
if(0x01/* e.g., DBG */) {
ss = (size_t) (--r*(buff));
ss = (s+(ss));
if(!(EQ(offset,ss))) return(~0x00);
}

return(r);
}
