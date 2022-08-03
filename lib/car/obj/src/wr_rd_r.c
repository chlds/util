/* **** Notes

Read and write
*/


# define CAR_H
# define STDIO_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl wr_rd_r(signed(*fd),signed char(*cache),signed(size))) {
auto signed r;
if(!fd) return(0x00);
if(!cache) return(0x00);
if(size<(0x01)) return(0x00);
r = rd_b(*(CLI_W+(fd)),cache,size);
if(!r) return(0x00);
if(!(r^(EOF))) return(0x00);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
return(0x00);
}
r = wr_b(*(CLI_B+(fd)),cache,r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}
return(r+(wr_rd_r(fd,cache,size)));
}
