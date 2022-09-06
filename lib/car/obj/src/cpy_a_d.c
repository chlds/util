/* **** Notes

Copy to the <di> out of the <si>
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_a_d(signed(arg),signed(*di),signed(*si))) {
auto signed cache;
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
cache = (*si);
*di = (cache);
--arg;
di++;
si++;
return(0x01+(cpy_a_d(arg,di,si)));
}
