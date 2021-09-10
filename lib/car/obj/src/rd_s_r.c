/* **** Notes

Read.
//*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl rd_s_r(signed char(**di),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed buff = (102400);

if(!di) return(0x00);
if(fd<(0x00)) return(0x00);

r = (buff*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

AND(flag,0x00);
r = rd_b(fd,b,--r);
if(!r) OR(flag,0x01);
if(!(r^(~0x00))) OR(flag,0x02);
if(0x02&(flag)) printf("%s %Xh \n","<< Error at fn. rd_b() with errno",errno);
if(flag) {
if(b) rl(b);
b = (0x00);
return(0x00);
}

r = concatenate(0x00,di,b);
if(!r) {
printf("%s \n","<< Error at fn. concatenate()");
if(*di) rl(*di);
if(b) rl(b);
b = (0x00);
*di = (b);
return(0x00);
}

rl(b);
b = (0x00);

return(0x01+(rd_s_r(di,fd)));
}
