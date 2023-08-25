# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuesy(signed char(**sym),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = casca(argp);
r = ords(sym,b);
rl(b);
b = (0x00);
if(!(r<(ct_v(sym)))) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
argp = (r+(argp));
return(r+(cuesy(sym,argp)));
}
