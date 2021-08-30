/* **** Notes

Write.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl wr_f_r(signed(fd),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
r = writef(0x01/* fn. _write */,fd,argp,ct_l(argp));
if(!r) OR(flag,0x01);
if(!(r^(~0x00))) OR(flag,0x02);
if(0x02&(flag)) printf("%s \n","<< Error at fn. writef()");
if(flag) return(0x00);

argp = (r+(argp));

return(0x01+(wr_f_r(fd,argp)));
}
