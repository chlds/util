# define CAR_H
# include "./../../../config.h"

signed(__cdecl incl(signed(arg))) {
auto signed r;
auto signed mask = (0xFFFF);
AND(r,0x00);
OR(r,arg);
AND(r,mask);
INC(r);
r = (signed short)(r);
AND(r,mask);
NOT(mask);
AND(arg,mask);
OR(arg,r);
return(arg);
}
