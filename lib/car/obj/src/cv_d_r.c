/* **** Notes

Convert a signed double word into letters.

Remarks:
Return (0x00) if the function fails.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_d_r(signed short(radix),signed char(*table),signed char(*di),signed(si))) {

auto signed i,r;

if(!table) return(0x00);
if(!di) return(0x00);

r = (si%(radix));
--di;
*di = (*(r+(table)));

si = (si/(radix));
if(!si) return(0x01);

return(0x01+(cv_d_r(radix,table,di,si)));
}
