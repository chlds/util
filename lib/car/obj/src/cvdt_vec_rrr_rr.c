# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_vec_rrr_rr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
auto signed(__cdecl*f)(signed char *argp);
auto signed(__cdecl**ff)(signed char *argp);
auto signed(__cdecl*(fn[]))(signed char *argp) = {
cvmo,
cvdi,
0x00,
};
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
ff = (fn);
if(!(mask&(arg))) ff++;
f = (*ff);
if(!f) return(0x00);
r = f(b);
OR(arg,r);
if(!r) return(0x00);
argp++;
return(cvdt_vec_extras(arg,argp,cvdt_vec_rrrr));
}
