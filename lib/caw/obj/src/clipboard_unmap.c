/*

Unmap.

Remarks:
Refer at fn. clipboard_map.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

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
