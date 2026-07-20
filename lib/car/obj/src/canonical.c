# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl canonical(signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed char a[] = ("0123456789ABCDEF");
b = (0x00);
args = ra(a,args);
if(!(0x01^(args))) return(b);
r = (argp%(args));
if(r<(0x00)) CII(r);
b = etch(deref(a+(r)));
if(!b) return(b);
argp = (argp/(args));
if(!argp) return(b);
return(catne(b,canonical(args,argp)));
}
