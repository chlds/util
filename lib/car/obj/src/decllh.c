# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl decllh(signed long long(arg))) {
auto signed long long r;
auto signed long long b = (0x10);
auto signed long long mask = (0xFFFF);
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
