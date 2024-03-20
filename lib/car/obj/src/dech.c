# define CAR_H
# include "./../../../config.h"

signed(__cdecl dech(signed(arg))) {
auto signed r;
auto signed b = (0x10);
auto signed mask = (0xFFFF);
AND(r,0x00);
OR(r,arg);
SHR(r,b);
AND(r,mask);
DEC(r);
r = (signed short)(r);
AND(r,mask);
AND(arg,mask);
SHL(r,b);
NOT(mask);
AND(r,mask);
OR(arg,r);
return(arg);
}
