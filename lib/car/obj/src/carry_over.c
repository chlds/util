/* **** Notes

Carry over.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl carry_over(size_t(*retv),signed(n/* notation */),signed(e))) {

auto signed bina = (0x02);

if(!retv) return(0x00);
if(n<(bina)) return(0x00);
if(e<(0x00)) return(0x00);

AND(*retv,0x00);
OR(*retv,0x01);

return(carry_over_r(retv,n,e));
}
