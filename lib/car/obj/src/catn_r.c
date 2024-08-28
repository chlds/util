# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catn_r(signed char **argp)) {
auto signed char *b;
b = (0x00);
if(!argp) return(b);
return(catn_rr(b,argp));
}
