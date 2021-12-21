/* **** Notes

Store bytes.

Remarks:
Append.
//*/


# define CAR
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl appd_b_r(signed(fd),fl_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

b = (signed char(*)) (*(CLI_BASE+(R(v,*argp))));
r = wr_b(fd,b,ct(b));
if(!(r^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. wr_b() with errno",errno);
return(0x00);
}

i = (r);
AND(r,0x00);
b = (signed char(*)) (*(CLI_OFFSET+(R(v,*argp))));
if(b) {
r = wr_b(fd,b,ct(b));
if(!(r^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. wr_b() with errno",errno);
return(0x00);
}}

r = (i+(r));

return(r);
}
