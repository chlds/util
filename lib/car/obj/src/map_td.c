/*

Open an existing thread object.

Remarks:
Refer at fn. unmap_td.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl map_td(signed(tid))) {

auto void *v;
auto signed r;
auto signed inherit = (0x00);
auto signed perm = (THREAD_ALL_ACCESS);

v = (void(*)) OpenThread(perm,inherit,tid);
if(!v) {
r = currently_occurring_error();
if(r) printf("%s %d %s %Xh \n","<< Error at fn. OpenThread() with no.",r,"or",r);
}

return(v);
}
