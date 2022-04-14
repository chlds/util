/*

Pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# define CAW_H
# include "../../../incl/config.h"

signed(__cdecl pin_w_rr(void(*argp))) {

auto signed short *w;
auto void *v;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

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

r = pin_w_rrr(argp);
if(!r) printf("%s \n","<< Error at fn. pin_w_rrr()");

if(!(clipboard_unmap())) {
printf("%s \n","<< Error at fn. clipboard_unmap()");
return(0x00);
}

return(r);
}
