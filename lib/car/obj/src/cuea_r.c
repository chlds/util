# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuea_r(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cueht(argp);
if(r) return(r);
r = cuelf(argp);
if(r) return(r);
r = cuecr(argp);
if(r) return(r);
return(cuea_rr(sym,argp));
}
