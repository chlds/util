# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuex_r(signed char(**sym),signed char(*argp),signed(__cdecl*f)(signed char(**sym),signed char(*argp)))) {
auto signed r;
r = cuenb(argp);
if(r) return(r);
if(!f) return(r);
return(f(sym,argp));
}
