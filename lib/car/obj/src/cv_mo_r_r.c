/* **** Notes

Convert to a month out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo_r_r(signed char(**vi),signed short(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(-0x01<(*di)) return(0x00);
if(!(*vi)) return(0x00);

r = cmpr_part(&i,si,*vi);
if(!i) AND(*di,0x00);

vi++;

return(0x01+(cv_mo_r_r(vi,di,si)));
}
