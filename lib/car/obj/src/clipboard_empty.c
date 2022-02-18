/*

Empty.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl clipboard_empty(void)) {

auto signed r;

r = EmptyClipboard();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EmptyClipboard() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}