/*

Unpin it to your clipboard.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define UNPIN_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl unpin_b(void)) {

auto void *v;
auto signed r;
auto signed short flag;

v = currently_working_window();
if(!v) {
printf("%s \n","<< Error at fn. currently_working_window()");
return(0x00);
}

r = clipboard_map(v);
if(!r) {
printf("%s \n","<< Error at fn. clipboard_map()");
return(0x00);
}

r = clipboard_empty();
if(!r) printf("%s %Xh \n","<< Error at fn. clipboard_empty() with no.",currently_occurring_error());

if(!(clipboard_unmap())) {
printf("%s \n","<< Error at fn. clipboard_unmap()");
return(0x00);
}

return(r);
}
