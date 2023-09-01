# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_r(signed(arg),signed char(*argp))) {
auto signed r;
auto signed bit = (0x10);
auto signed mask = (0xFFFF);
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
r = cvat_rr(arg,argp);
if(!(0x01+(r))) return(r);
SHL(r,bit);
OR(r,mask&(cvatt(arg,argp,cvat_mn)));
if(EQ(mask,mask&(r))) return(~0x00);
return(r);
}
