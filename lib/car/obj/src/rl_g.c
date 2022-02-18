/*

Release.

Remarks:
Refer at fn. alloc_g.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl rl_g(void(*argp))) {

auto void *g;
auto signed r;

if(!argp) return(0x00);

g = GlobalFree(argp);
if(g) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalFree() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
