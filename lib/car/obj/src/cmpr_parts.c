/* **** Notes

Compare the ones in case sensitive strings.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cmpr_parts(signed(*cache),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

*cache = (~0x00);

return(cmpr_parts_r(cache,di,si));
}
