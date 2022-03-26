/*

Lock.

Remarks:
Refer at fn. alloc_g, rl_g, unlock_g and cpy_g.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl lock_g(void(*argp))) {

auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

g = (argp);
g = (signed short(*)) GlobalLock(g);
if(!g) {
r = currently_occurring_error();
printf("%s %d %s %Xh \n","<< Error at fn. GlobalLock() with no.",r,"or",r);
}

return(g);
}
