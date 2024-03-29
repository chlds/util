# define CAR_H
# include "./../../../config.h"

signed(__cdecl ldh(signed(args),signed(argp))) {
auto signed b = (0x10);
auto signed mask = (0xFFFF);
AND(args,mask);
AND(argp,mask);
SHL(argp,b);
NOT(mask);
AND(argp,mask);
OR(args,argp);
return(args);
}
