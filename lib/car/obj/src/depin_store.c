/* **** Notes

Store clipboard text.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl depin_store(signed short(arg),signed char(**argp))) {

auto signed char **v;
auto signed char *b;
auto signed char *path;
auto signed r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

v = (argp);
v++;
if(!v) return(0x00);
if(!(*v)) return(0x00);

v++;
if(!v) return(0x00);
if(!(*v)) return(0x00);

path = (*v);
b = (0x00);
r = depin_b(&b);
if(!r) {
// printf("%s \n","<< Error at fn. depin_b()");
// or empty..
return(0x01);
}

r = depin_store_r(arg,path,b);
embed_l(0x00,b);
rl(b);
b = (0x00);

return(r);
}
