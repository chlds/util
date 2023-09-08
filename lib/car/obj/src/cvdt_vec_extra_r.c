# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_extra_r(signed(arg),signed char(**argp),signed(__cdecl*f)(signed(arg),signed char(**argp)))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
r = (signed)(mask&(*b));
if(!(EQ(SP,r))) return(f(arg,argp));
argp++;
return(cvdt_vec_extra_r(arg,argp,f));
}
