/*

Open an existing thread object.

Remarks:
Refer at fn. unmap_td.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

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
