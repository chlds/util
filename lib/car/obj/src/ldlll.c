# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl ldlll(signed long long(args),signed long long(argp))) {
auto signed long long mask = (0xFFFF);
AND(argp,mask);
NOT(mask);
AND(args,mask);
OR(args,argp);
return(args);
}
