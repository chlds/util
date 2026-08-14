# define CAW_H
# define CAR_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl armlength_xe_r(void(*args),signed short(*argp))) {
auto signed r;
auto TEXTMETRIC m;
auto SIZE z;
if(!args) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
if(!GetTextExtentPoint32W(args,argp,ct_w(argp),&z)) return(r);
if(!GetTextMetrics(args,&m)) return(r);
r = cii(m.tmOverhang);
return(r+(R(cx,z)));
}
