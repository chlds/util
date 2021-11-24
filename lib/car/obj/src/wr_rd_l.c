/* **** Notes

Read and write.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_rd_l(signed(*fd),signed char(*cache),signed(size))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!fd) return(0x00);
if(!cache) return(0x00);
if(size<(0x01)) return(0x00);

AND(flag,0x00);
AND(i,0x00);
while(0x01) {
if(flag) break;
r = rd_b(*(CLI_SI+(fd)),cache,size);
if(!r) break;
if(!(r^(EOF))) break;
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
flag++;
break;
}
r = wr_b(*(CLI_DI+(fd)),cache,r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
flag++;
break;
}
i = (r+(i));
}

if(flag) AND(r,0x00);
else r = (i);

return(r);
}
