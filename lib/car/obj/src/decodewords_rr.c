# define CAR_H
# include "./../../../config.h"

signed(__cdecl decodewords_rr(signed short(*arg))) {
auto signed r;
auto signed a = (0x10000);
r = dw(derefs(arg));
if(!lowsurrogates(r)) return(cii(a));
AND(r,gnb(10));
return(r);
}
