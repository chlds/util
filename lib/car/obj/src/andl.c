# define CAR_H
# include "./../../../config.h"

signed(__cdecl andl(signed(args),signed(argp))) {
auto signed r;
auto signed mask = (0xFFFF);
AND(r,0x00);
OR(r,args);
AND(r,mask);
AND(argp,mask);
AND(r,argp);
NOT(mask);
AND(args,mask);
OR(args,r);
return(args);
}
