/*

Unlock.

Remarks:
Refer at fn. alloc_g, rl_g, lock_g and cpy_g.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl unlock_g(void(*argp))) {

auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

g = (argp);
r = GlobalUnlock(g);
if(!r) {
r = currently_occurring_error();
if(NO_ERROR^(r)) {
printf("%s %d %s %Xh \n","<< Error at fn. GlobalUnlock() with no.",r,"or",r);
return(0x00);
}}

g = (0x00);

return(0x01);
}
