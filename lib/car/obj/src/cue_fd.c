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
auto signed buff;
auto signed r;
auto signed short flag;
auto size_t s;
auto size_t ss;

if(offset<(0x00)) return(~0x00);
if(fd<(0x00)) return(~0x00);
if(!offset) return(0x00);

AND(s,0x00);
AND(buff,0x00);
OR(buff,0x01);
SHL(buff,0x0E);
buff = (1000*(buff));
// r = cue_fd_r(&s,offset,buff,fd);
r = cue_fd_l(&s,offset,buff,fd);
if(!r) return(~0x00);
if(!(EQ(offset,s))) {
if(0x01/* e.g., DBG */) {
// printf("%s \n","<< Error at fn. cue_fd_r()");
printf("%s \n","<< Error at fn. cue_fd_l()");
printf("(read/total:%zu/%zu) \n",s,offset);
}
return(~0x00);
}

return(r);
}
