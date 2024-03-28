# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl declll(signed long long(arg))) {
auto signed long long r;
auto signed long long mask = (0xFFFF);
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
