# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_extras_r(signed(arg),signed char(**argp),signed(__cdecl*f)(signed(arg),signed char(**argp)))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(arg);
if(!(*argp)) return(arg);
b = (*argp);
r = (signed)(mask&(*b));
if(!(EQ(SP,r))) return(f(arg,argp));
argp++;
return(cvdt_vec_extras_r(arg,argp,f));
}
