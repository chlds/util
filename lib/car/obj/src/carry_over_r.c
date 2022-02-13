/* **** Notes

Carry over.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl carry_over_r(size_t(*retv),signed(n/* notation */),signed(e))) {

if(!retv) return(0x00);
if(!e) return(0x01);

*retv = (n*(*retv));
--e;

return(0x01+(carry_over_r(retv,n,e)));
}
