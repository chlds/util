/*

Store bytes in UTF-16.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include "./../../../incl/config.h"
# include "./incl/config.h"

signed(__cdecl clipboard_store_w(void(*argp))) {

auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

g = (argp);
g = SetClipboardData(CF_UNICODETEXT,g);
if(!g) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetClipboardData() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
