/* **** Notes

Convert to a month out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo_r(signed char(***vi),signed short(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(-0x01<(*di)) return(0x00);
if(!(*vi)) return(0x00);

r = cv_mo_r_r(*vi,di,si);
if(!r) return(0x00);

if(-0x01<(*di)) *di = (-0x01+(r));

vi++;

return(0x01+(cv_mo_r(vi,di,si)));
}
