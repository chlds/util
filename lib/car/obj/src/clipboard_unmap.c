/*

Unmap.

Remarks:
Refer at fn. clipboard_map.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl clipboard_unmap(void)) {

auto void *v;
auto signed r;
auto signed short flag;

r = CloseClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseClipboard() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
