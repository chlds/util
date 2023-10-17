# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl rmbr(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(argp);
if(!(*argp)) return(argp);
b = (argp);
r = ct(b);
b = (r+(b));
--b;
r = rmbr_r(r,b);
return(argp);
}
