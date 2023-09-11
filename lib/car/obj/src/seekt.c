/* Notes

Seek letters

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl seekt(signed(args/* fd */),signed(argt/* letters */))) {
auto signed r;
if(args<(0x00)) return(0x00);
if(!(0x00<(argt))) return(0x00);
r = seekl(args);
if(!r) return(r);
--argt;
return(0x01+(seekt(args,argt)));
}
