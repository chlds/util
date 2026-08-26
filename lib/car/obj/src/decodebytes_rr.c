# define CAR_H
# include "./../../../config.h"

signed(__cdecl decodebytes_rr(signed char(*arg))) {
auto signed r;
if(!continuationbyte(arg)) return(0x00);
r = extractlow6bits(db(deref(arg)));
return(ordervibyvi(r,decodebytes_rr(++arg)));
}
