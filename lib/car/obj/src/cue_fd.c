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
auto signed i,r;
auto signed short flag;
auto signed buff = (1024*(1024));

if(offset<(0x00)) return(~0x00);
if(fd<(0x00)) return(~0x00);
if(!offset) return(0x00);

i = (buff);
r = cue_fd_r(&i,offset,fd);
if(!r) return(~0x00);
if(!(0x00<(i))) return(~0x00);

r = (--r*(buff));
r = (i+(r));
if(!(EQ(offset,r))) return(~0x00);

return(0x01);
}
