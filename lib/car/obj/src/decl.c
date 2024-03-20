# define CAR_H
# include "./../../../config.h"

signed(__cdecl decl(signed(arg))) {
auto signed r;
auto signed mask = (0xFFFF);
AND(r,0x00);
OR(r,arg);
AND(r,mask);
DEC(r);
r = (signed short)(r);
AND(r,mask);
NOT(mask);
AND(arg,mask);
OR(arg,r);
return(arg);
}
