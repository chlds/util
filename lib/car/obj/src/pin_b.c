/*

Pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl pin_b(signed char(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

w = (0x00);
r = decode_wb(&w,argp);
if(!r) {
printf("%s \n","<< Error at fn. decode_wb()");
return(0x00);
}

r = pin_w(w);
if(!r) printf("%s \n","<< Error at fn. pin_w()");

if(!(rl(w))) {
printf("%s \n","<< Error at fn. rl()");
return(0x00);
}

return(r);
}
