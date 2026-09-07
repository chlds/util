# define CAR_H
# include "./../../../config.h"

signed(__cdecl decodewords_r(signed short(*arg))) {
auto signed r;
auto signed a = (0x10000);
r = dw(derefs(arg));
if(!highsurrogates(r)) return(cii(a));
AND(r,gnb(10));
r = shl_xxe(r,10);
return(alte(r,decodewords_rr(++arg)));
}
