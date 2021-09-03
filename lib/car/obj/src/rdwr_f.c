/* **** Notes

Read and write.
*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl rdwr_f(signed(*fd),signed char(*cache),signed(size))) {

auto signed char *b;
auto signed i,r;

if(!fd) return(0x00);
if(!cache) return(0x00);
if(size<(0x01)) return(0x00);

r = read(*(CLI_SI+(fd)),cache,size);
if(!r) return(0x00);
if(!(r^(EOF))) return(0x00);
/* An error has occurred at fn. read() */
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. read()");
return(0x00);
}

r = write(*(CLI_DI+(fd)),cache,r);
/* An error has occurred at fn. write() */
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. write()");
return(0x00);
}

return(r+(rdwr_f(fd,cache,size)));
}
