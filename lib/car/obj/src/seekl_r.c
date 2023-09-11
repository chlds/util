# define CAR_H
# include "./../../../config.h"

signed(__cdecl seekl_r(signed(args/* fd */),signed(argt/* times */))) {
auto signed r;
if(args<(0x00)) return(0x00);
if(!(0x00<(--argt))) return(0x00);
r = seekb(args);
if(!r) return(r);
return(0x01+(seekl_r(args,argt)));
}
