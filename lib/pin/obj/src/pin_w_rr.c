/*

Pin

Remarks:
Refer at fn. clipboard_map and clipboard_unmap
*/


# define CAR_H
# define CAW_H
# define PIN_H
# include "./../../../config.h"

signed(__cdecl pin_w_rr(void(*argp))) {
auto void *v;
auto signed r;
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
