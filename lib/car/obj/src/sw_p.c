/* **** Notes

Exchange the DI and the SI
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl sw_p(void(**di),void(**si))) {

auto void *p;

if(!di) return(0x00);
if(!si) return(0x00);

p = (*di);
*di = (*si);
*si = (p);

return(0x01);
}
