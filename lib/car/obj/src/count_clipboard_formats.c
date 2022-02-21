/*

Count.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl count_clipboard_formats(void)) {

auto signed r;

r = CountClipboardFormats();
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CountClipboardFormats() with no.",r,"or",r);
return(0x00);
}

return(r);
}
