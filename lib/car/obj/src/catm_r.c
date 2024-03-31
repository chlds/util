# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catm_r(signed char **argp)) {
auto signed char *b;
b = (0x00);
if(!argp) return(b);
return(catm_rr(b,argp));
}
