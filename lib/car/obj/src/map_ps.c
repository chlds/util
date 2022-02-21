/*

Open.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl map_ps(signed(pid))) {

auto void *v;
auto signed r;
auto signed inherit = (0x00);
auto signed perm = (PROCESS_ALL_ACCESS);

v = (void(*)) OpenProcess(perm,inherit,pid);
if(!v) {
r = GetLastError();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. OpenProcess() with no.",r,"or",r);
}

return(v);
}
