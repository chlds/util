/* **** Notes

Read and write.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl rdwr_f(signed(*fd),signed char(*cache),signed(size))) {

auto signed char *b;
auto signed i,r;

if(!fd) return(0x00);
if(!cache) return(0x00);
if(size<(0x01)) return(0x00);

r = rd_b(*(CLI_SI+(fd)),cache,size);
if(!r) return(0x00);
if(!(r^(EOF))) return(0x00);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
return(0x00);
}

r = wr_b(*(CLI_DI+(fd)),cache,r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}

return(r+(rdwr_f(fd,cache,size)));
}
