/* **** Notes

Count to the words out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct2words_r(signed char(***vi),signed(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(-0x01<(*di)) return(0x00);
if(!(*vi)) return(0x00);

r = ct2words_r_r(*vi,di,si);
if(!r) return(0x00);

vi++;

return(0x01+(ct2words_r(vi,di,si)));
}
