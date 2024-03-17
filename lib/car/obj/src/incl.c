# define CAR_H
# include "./../../../config.h"

signed(__cdecl incl(signed(*argp))) {
auto signed r;
auto signed mask = (0xFFFF);
if(!argp) return(0x00);
AND(r,0x00);
OR(r,(*argp));
AND(r,mask);
INC(r);
r = (signed short)(r);
AND(r,mask);
NOT(mask);
AND(*argp,mask);
OR(*argp,r);
return(0x01);
}
