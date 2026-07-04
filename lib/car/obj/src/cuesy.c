# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuesy(signed char(**sym),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!deref(argp)) return(0x00);
b = casca(argp);
r = ords(sym,b);
b = annih(b);
if(!(r<(ct_v(sym)))) return(0x00);
r = ct_a(argp);
if(!r) return(r);
return(r+(cuesy(sym,argp+(r))));
}
