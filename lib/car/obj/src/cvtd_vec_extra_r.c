# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvtd_vec_extra_r(signed char(**argp),signed(__cdecl*f)(signed char(**argp)))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
b = (*argp);
r = (signed)(mask&(*b));
if(!(EQ(SP,r))) return(f(argp));
argp++;
return(cvtd_vec_extra_r(argp,f));
}
