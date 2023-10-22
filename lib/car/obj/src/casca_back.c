# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl casca_back(signed char *argp)) {
auto signed char *b;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
// b = catt(b,(void*)0x00);
return(casca_back_r(b));
}
