/*

Release.

Remarks:
Refer at fn. alloc_g.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl rl_g(void(*argp))) {

auto void *g;
auto signed r;

if(!argp) return(0x00);

g = GlobalFree(argp);
if(g) {
r = currently_occurring_error();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalFree() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
