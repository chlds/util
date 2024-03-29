# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl ldllh(signed long long(args),signed long long(argp))) {
auto signed long long b = (0x10);
auto signed long long mask = (0xFFFF);
AND(args,mask);
AND(argp,mask);
SHL(argp,b);
NOT(mask);
AND(argp,mask);
OR(args,argp);
return(args);
}
