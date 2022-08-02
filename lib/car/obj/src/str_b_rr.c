/* **** Notes

Store bytes
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl str_b_rr(signed(fd),signed char(**argp))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
argp++;
r = wr_b(fd,b,ct(b));
if(!(r^(~0x00))) {
printf("%s %Xh \n","<< Error at fn. wr_b() with errno",errno);
return(0x00);
}
return(r+(str_b_rr(fd,argp)));
}
