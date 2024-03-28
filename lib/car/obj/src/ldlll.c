# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl ldlll(signed long long(args),signed long long(argp))) {
auto signed long long r;
auto signed long long mask = (0xFFFF);
AND(r,0x00);
OR(r,args);
NOT(mask);
AND(r,mask);
NOT(mask);
AND(argp,mask);
OR(r,argp);
return(r);
}
