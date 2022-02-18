/*

Allocate.

Remarks:
Refer at fn. rl_g.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl alloc_g(signed(arg))) {

auto void *g;
auto signed r;

if(arg<(0x01)) return(0x00);

g = GlobalAlloc(GMEM_SHARE|GHND,arg);
if(!g) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalAlloc() with no.",r,"or",r);
}

return(g);
}
