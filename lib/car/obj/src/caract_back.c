# define CAR_H
# include "./../../../config.h"

signed(__cdecl caract_back(signed char *argp)) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (argp);
r = ct(b);
if(!r) return(r);
--r;
b = (r+(b));
return(caract_back_r(b));
}
