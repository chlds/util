/*

Pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define DUAL_CONFIG_H
# define CAW_H
# define PIN_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl pin_w_r(void(*di),signed short(*si))) {

auto signed short *w;
auto void *g;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

g = (di);
w = (signed short(*)) lock_g(g);
if(!w) {
printf("%s \n","<< Error at fn. lock_g()");
return(0x00);
}

r = cpy_w(w,si);
// if(!r) printf("%s \n","<< Error at fn. cpy_w()");

if(!(unlock_g(g))) {
printf("%s \n","<< Error at fn. unlock_g()");
return(0x00);
}

g = (0x00);
w = (signed short(*)) (g);

return(pin_w_rr(di));
}
