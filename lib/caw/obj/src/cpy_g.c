/*

Copy.

Remarks:
Refer at fn. alloc_g and rl_g.
*/


# define DUAL_CONFIG_H
# define CAR
# define CAW_H
# define STDIO_H
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl cpy_g(void(*di),signed short(*si))) {

auto signed char *b;
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

if(!(unlock_g(g))) {
printf("%s \n","<< Error at fn. unlock_g()");
return(0x00);
}

g = (0x00);

return(r);
}
