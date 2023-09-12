/* Notes

Retrieve letters

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readtxt_xe(signed(args/* fd */),signed(argt/* letters */),signed(argk/* seek */))) {
if(!(EQ(argk,seekt(args,argk)))) return(0x00);
return(readt(args,argt));
}
