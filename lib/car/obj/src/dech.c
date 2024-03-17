# define CAR_H
# include "./../../../config.h"

signed(__cdecl dech(signed(*argp))) {
auto signed r;
auto signed b = (0x10);
auto signed mask = (0xFFFF);
if(!argp) return(0x00);
AND(r,0x00);
OR(r,(*argp));
SHR(r,b);
AND(r,mask);
DEC(r);
r = (signed short)(r);
AND(r,mask);
AND(*argp,mask);
SHL(r,b);
NOT(mask);
AND(r,mask);
OR(*argp,r);
return(0x01);
}
