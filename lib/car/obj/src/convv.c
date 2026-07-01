/*

Convert

Remarks:
Call fn. relw later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl convv(signed char(**sym),signed char(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
if(!deref(argp)) return(0x00);
b = (0x00);
w = (0x00);
r = cntv(sym,argp);
if(!r) return(w);
w = (signed char**)(alloc(++r*(sizeof(*w))));
if(!w) return(w);
*w = (b);
r = convv_r(w,sym,argp);
if(!r) {
relw(w);
w = (0x00);
}
return(w);
}
