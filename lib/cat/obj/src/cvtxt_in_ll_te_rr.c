# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_in_ll_te_rr(signed(arg),time_t(*argp))) {
auto signed char *b;
auto signed short flag;
auto signed char *(__cdecl*f)(signed(arg),time_t(*argp));
auto signed char *(__cdecl**ff)(signed(arg),time_t(*argp));
auto signed char *(__cdecl*(fn[]))(signed(arg),time_t(*argp)) = {
cvtxtoffullmonths_in_ll_te,
cvtxtofhollowmonths_in_ll_te,
0x00,
};
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
b = (0x00);
ff = (fn);
if(EQ(0x03,arg)) OR(flag,0x01);
if(EQ(0x05,arg)) OR(flag,0x01);
if(EQ(0x07,arg)) OR(flag,0x01);
if(EQ(0x0A,arg)) OR(flag,0x01);
if(!flag) ff++;
f = (*ff);
if(!f) return(b);
return(cvtxt_in_ll_te_rrr(argp,f));
}
