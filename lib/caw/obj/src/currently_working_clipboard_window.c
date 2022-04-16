/*

Retrieve the handle to the window that currently has the clipboard open.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_clipboard_window(void)) {

auto void *v;
auto signed r;
auto signed short flag;

v = (void(*)) GetOpenClipboardWindow();
if(!v) {
r = GetLastError();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. GetOpenClipboardWindow() with no.",r,"or",r);
}

return(v);
}
