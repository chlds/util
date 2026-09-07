# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl byteweave(signed(arg))) {
auto signed char *b;
auto signed a = (0x06);
auto signed char c[] = {
0x00,0x00,0xC0,0xE0,0xF0,0x00,
};
b = etch_xe(shr_xxe(arg,a*(dec_xe(cbc(arg)))));
if(!b) return(b);
b = cathe(b,byteweave_r(arg,cbc(arg)));
ADD(*b,(*(c+(cbc(arg)))));
return(b);
}
