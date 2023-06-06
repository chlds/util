# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_rl_b(signed char **argp)) {
auto signed char **v;
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
v = (argp);
b = (*v);
r = cas_b_r(argp);
if(!r) return(r);
embed(0x00,b);
rl(b);
b = (0x00);
v = (0x00);
return(r);
}
