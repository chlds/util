/* **** Notes

Convert to a month out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo_r(signed(arg/* front or from behind */),signed char(***vi),signed short(*di),signed char(*si))) {

auto signed i,r;
auto signed short flag;

if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*vi)) return(0x00);

r = cv_ord(arg/* front or from behind */,*vi,&i,si);
// if(!r) return(0x00);
if(!(i<(0x00))) {
*di = (signed short) (i);
return(r);
}

vi++;

return(0x00+(cv_mo_r(arg,vi,di,si)));
}
