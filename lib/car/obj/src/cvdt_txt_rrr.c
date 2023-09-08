# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_txt_rrr(signed char(**sym),signed char(*argp),signed(__cdecl*f)(signed char(**argv)))) {
auto signed char **w;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
AND(r,0x00);
w = convt(sym,argp);
if(!w) return(r);
if(f) r = f(w);
relw(w);
w = (0x00);
return(r);
}
