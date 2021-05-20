/* **** Notes

Check the ordinal number.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_ords_r(signed(arg/* front or from behind */),signed char(***vi),signed(*di),signed char(*si))) {

auto signed i,r;
auto signed short flag;

if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*vi)) return(0x00);

r = cv_ord(arg/* front or from behind */,*vi,di,si);
// if(!r) return(0x00);
i = (*di);
if(!(i<(0x00))) return(r);

vi++;

return(0x00+(cv_ords_r(arg,vi,di,si)));
}
