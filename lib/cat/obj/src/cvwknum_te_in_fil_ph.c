# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_fil_ph(time_t(*argt),signed(args),signed(argp))) {
auto signed char *b;
auto signed wedd = (0x03);
auto signed char *(__cdecl*f)(void(*args),signed(argp));
auto signed char *(__cdecl**d)(void(*args),signed(argp));
auto signed char *(__cdecl*(a[]))(void(*args),signed(argp)) = {
cvwknum_te_in_fil_ph_rr,
cvwknum_te_in_fil_ph_r,
0x00,
};
b = (0x00);
if(!argt) return(b);
if(args<(0x00)) return(b);
args = (args%(wedd));
d = (a);
if(!argp) d++;
f = (*d);
return(f(argt,args));
}
