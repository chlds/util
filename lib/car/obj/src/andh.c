# define CAR_H
# include "./../../../config.h"

signed(__cdecl andh(signed(args),signed(argp))) {
auto signed r;
auto signed b = (0x10);
auto signed mask = (0xFFFF);
AND(r,0x00);
OR(r,args);
SHR(r,b);
AND(r,mask);
AND(argp,mask);
AND(r,argp);
AND(args,mask);
SHL(r,b);
NOT(mask);
AND(r,mask);
OR(args,r);
return(args);
}
