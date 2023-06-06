# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_b_r(signed char **argp)) {
auto signed char **v;
auto signed char *b;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
v = (argp);
v++;
if(!v) return(0x00);
b = (*v);
*argp = (b);
b = (0x00);
v = (0x00);
argp++;
return(0x01+(cas_b_r(argp)));
}
