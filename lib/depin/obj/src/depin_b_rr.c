/*

De-pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define DEPIN_H
# define CAR_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl depin_b_rr(signed char(**di),void(*si))) {
auto signed short *w;
auto void *g;
auto signed r;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
g = (si);
w = (signed short(*)) lock_g(g);
if(!w) {
printf("%s \n","<< Error at fn. lock_g()");
return(0x00);
}
r = cv_bw(di,w);
// if(!r) printf("%s \n","<< Error at fn. cv_bw()");
if(!(unlock_g(g))) {
printf("%s \n","<< Error at fn. unlock_g()");
return(0x00);
}
g = (0x00);
w = (signed short(*)) (g);
return(r);
}
