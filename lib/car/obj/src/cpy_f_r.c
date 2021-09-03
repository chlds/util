/* **** Notes

Copy.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cpy_f_r(signed(*fd))) {

auto signed char *b;
auto signed i,r;
auto signed buff = (1638400);

if(!fd) return(0x00);

r = (buff*(sizeof(*b)));
i = (r);
b = (signed char(*)) alloc(r);
if(!b) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}

r = rdwr_f(fd,b,r);
if(!r) printf("%s \n","<< Error at fn. rdwr_f()");

embed(i,b);
rl(b);
b = (0x00);

return(r);
}
