/* Notes

Retrieve letters

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readt(signed(args/* fd */),signed(argt/* letters */))) {
auto signed char *b;
if(args<(0x00)) return(0x00);
if(argt<(0x01)) return(0x00);
b = readl(args);
if(!b) return(b);
return(readt_r(b,args,argt));
}
