# define CAR_H
# include "./../../../config.h"

signed(__cdecl convhm_mer_r(signed(arg),signed char(**argp))) {
auto signed r;
auto signed bit = (0x10);
auto signed mask = (0xFFFF);
if(!argp) return(~0x00);
AND(r,0x00);
OR(r,arg);
arg = convmn(r);
SHR(r,bit);
r = (mask&(r));
r = convhr(convmer(r,argp));
OR(r,arg);
return(r);
}
