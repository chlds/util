# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl wrt_r(signed char(*argp),signed(arg))) {
auto signed i,r;
auto signed(__cdecl**ff)(signed(arg));
auto signed(__cdecl*f)(signed(arg));
auto signed(__cdecl*(fn[]))(signed(arg)) = {
clih_o_21b,
clih_o_16b,
0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(0x00<(arg))) return(0x00);
r = decode_b(&i,argp);
if(!r) {
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}
ff = (fn);
if(r<(0x04)) ff++;
f = (*ff);
if(!f) return(0x00);
if(!(f(i))) {
printf("%s \n","<< Error at fn. f()");
return(0x00);
}
argp = (r+(argp));
--arg;
return(0x01+(wrt_r(argp,arg)));
}
