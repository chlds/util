/* **** Notes

Copy to the <di> out of the <si>
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cpy_b(signed char(*di),signed char(*si))) {

auto signed char cache;

if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*di = (0x00);
return(0x00);
}

cache = (*si);
*di = (cache);
di++;
si++;

return(0x01+(cpy_b(di,si)));
}
