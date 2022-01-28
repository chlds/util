/* **** Notes

Convert into a size_t out of characters.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sa_r(signed short(radix),signed char(*table),size_t(*di),signed char(*si))) {

auto signed r;
auto signed short flag;
auto signed char c;

if(!table) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

c = (*si);
r = ord(table,c);
if(r<(radix)) *di = (r+(radix*(*di))) /* % LIMIT */ ;

si++;

return(0x01+(cv_sa_r(radix,table,di,si)));
}
