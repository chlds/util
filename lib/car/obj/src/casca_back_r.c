# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl casca_back_r(signed char *argp)) {
auto signed char *b;
auto signed r;
// if(!argp) return(argp);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
r = ct(b);
if(!r) return(0x00);
r = (r+(0x01+(~(caract_back(b)))));
if(r<(0x00)) return(0x00);
return(cathy(r+(b)));
}
