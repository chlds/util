/* **** Notes

Compare the ones in case sensitive strings.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_parts(signed(*cache),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed r;
auto signed char c;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*di)) {
*cache = (~(0x00));
return(0x00);
}

c = (*di);

if(!(c^(*si))) {
r = cmpr_partially(cache,di,si);
if(!r) {
*cache = (~(0x01));
return(0x00);
}
if(!(*cache)) return(0x01);
}

di++;

return(0x01+(cmpr_parts(cache,di,si)));
}
