/*

Pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
Based on UTF-16
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl pin_w(signed short(*argp))) {

auto signed short *w;
auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

w = (argp);
r = ct_w(w);
r++;
r = (r*(sizeof(*w)));
g = alloc_g(r);
if(!g) {
printf("%s \n","<< Error at fn. alloc_g()");
return(0x00);
}

r = pin_w_r(g,argp);
if(!r) printf("%s \n","<< Error at fn. pin_w_r()");

if(!(rl_g(g))) {
printf("%s \n","<< Error at fn. rl_g()");
return(0x00);
}

return(r);
}
