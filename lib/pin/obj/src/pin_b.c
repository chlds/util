/*

Pin it to your clipboard.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
Based on UTF-8
*/


# define DUAL_CONFIG_H
# define PIN_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl pin_b(signed char(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

w = (0x00);
r = cv_wb(&w,argp);
if(!r) {
printf("%s \n","<< Error at fn. cv_wb()");
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
