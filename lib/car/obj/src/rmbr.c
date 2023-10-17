# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl rmbr(signed char(*argp))) {
auto signed r;
if(!argp) return(argp);
if(!(*argp)) return(argp);
r = ct(argp);
argp = (r+(argp));
--argp;
r = rmbr_r(r,argp);
return(argp);
}
