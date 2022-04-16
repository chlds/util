/*

Retrieve the window handle of the current owner of the clipboard.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_clipboard_owner(void)) {

auto void *v;
auto signed r;
auto signed short flag;

v = (void(*)) GetClipboardOwner();
if(!v) {
r = GetLastError();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. GetClipboardOwner() with no.",r,"or",r);
}

return(v);
}
