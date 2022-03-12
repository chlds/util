/* **** Notes

Compare strings.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_w(signed(*cache),signed short(*di),signed short(*si))) {

auto signed r;

if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

*cache = (~0x00);

return(cmpr_w_r(cache,di,si));
}
