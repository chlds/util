/* **** Notes

Compare the ones in case sensitive strings.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_parts_r(signed(*cache),signed char(*di),signed char(*si))) {

auto signed r;
auto signed char c;

if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*di)) return(0x00);

c = (*di);
if(!(c^(*si))) {
r = cmpr_partially(cache,di,si);
if(!(*cache)) return(0x00);
}

di++;

return(0x01+(cmpr_parts_r(cache,di,si)));
}
