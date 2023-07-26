# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_rrr(signed(arg),signed char(*argp))) {
auto signed i,r;
auto signed(__cdecl**ff)(signed(arg));
auto signed(__cdecl*f)(signed(arg));
auto signed(__cdecl*(fn[]))(signed(arg)) = {
clih_o_21b,
clih_o_16b,
0x00,
};
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
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
arg = (arg+(0x01+(~r)));
argp = (r+(argp));
return(r+(clih_o_rrr(arg,argp)));
}
