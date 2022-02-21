/*

Close.

Remarks:
Refer at fn. map_ps.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl unmap_ps(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = CloseHandle(argp);
if(!r) {
r = GetLastError();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. CloseHandle() with no.",r,"or",r);
return(0x00);
}

return(r);
}
