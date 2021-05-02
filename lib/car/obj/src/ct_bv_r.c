/* **** Notes

Count bytes.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_bv_r(signed(*di),signed char(**si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = ct(*si);
if(!r) return(0x00);

*di = (r+(*di));
si++;

return(0x01+(ct_bv_r(di,si)));
}
