/*

Copy

Remarks:
Refer at fn. alloc_g and rl_g
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cpy_g(void(*di),signed short(*si))) {
auto signed short *w;
auto void *g;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
g = (di);
w = (signed short(*)) lock_g(g);
if(!w) {
printf("%s \n","<< Error at fn. lock_g()");
return(0x00);
}
r = cpy_w(w,si);
if(!(unlock_g(g))) {
printf("%s \n","<< Error at fn. unlock_g()");
return(0x00);
}
g = (0x00);
return(r);
}
