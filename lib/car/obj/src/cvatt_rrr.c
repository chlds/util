# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvatt_rrr(signed char(**sym),signed char(*argp),signed(__cdecl*f)(signed char(**argv)))) {
auto signed char **w;
auto signed r;
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
AND(r,0x00);
NOT(r);
w = convv(sym,argp);
if(!w) return(~0x00);
if(f) r = f(w);
relw(w);
w = (0x00);
return(r);
}
