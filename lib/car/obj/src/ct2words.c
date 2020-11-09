/* **** Notes

Count to the words out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct2words(signed char(***vi),signed(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

*di = (~0x00);

r = ct2words_r(vi,di,si);

return(r);
}
