/*

Allocate.

Remarks:
Refer at fn. rl_g.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl alloc_g(signed(arg))) {

auto void *g;
auto signed r;

if(arg<(0x01)) return(0x00);

g = GlobalAlloc(GMEM_SHARE|GHND,arg);
if(!g) {
r = currently_occurring_error();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalAlloc() with no.",r,"or",r);
}

return(g);
}
