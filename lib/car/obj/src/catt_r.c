# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catt_r(signed char **argp)) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (0x00);
r = catt_rr(&b,argp);
return(b);
}
