/*

Store bytes in UTF-16.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define PIN_H
# include "./../../../config.h"

signed(__cdecl pin_w_rrr(void(*argp))) {

auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

r = clipboard_empty();
if(!r) {
r = currently_occurring_error();
printf("%s %d %s %Xh \n","<< Error at fn. clipboard_empty() with no.",r,"or",r);
return(0x00);
}

g = (argp);
r = clipboard_store_w(g);
if(!r) printf("%s \n","<< Error at fn. clipboard_store_w()");

return(r);
}
