# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl ldllh(signed long long(args),signed long long(argp))) {
auto signed long long r;
auto signed long long b = (0x10);
auto signed long long mask = (0xFFFF);
AND(r,0x00);
OR(r,args);
AND(r,mask);
AND(argp,mask);
SHL(argp,b);
NOT(mask);
AND(argp,mask);
OR(r,argp);
return(r);
}
