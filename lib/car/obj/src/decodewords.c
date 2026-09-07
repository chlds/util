# define CAR_H
# include "./../../../config.h"

signed(__cdecl decodewords(signed short(*arg))) {
auto signed a = (0x10000);
if(!surrogates(dw(derefs(arg)))) return(dw(derefs(arg)));
return(a+(decodewords_r(arg)));
}
