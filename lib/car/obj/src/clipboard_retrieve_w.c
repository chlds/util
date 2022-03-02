/*

Retrieve bytes in UTF-16.

Remarks:
Refer at fn. clipboard_store_w, clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl clipboard_retrieve_w(void)) {

auto void *g;
auto signed r;
auto signed short flag;

g = GetClipboardData(CF_UNICODETEXT);
if(!g) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. GetClipboardData() with no.",r,"or",r);
return(0x00);
}

return(g);
}
