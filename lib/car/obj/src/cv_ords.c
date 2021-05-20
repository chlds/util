/* **** Notes

Check the ordinal number.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_ords(signed(arg/* front or from behind */),signed char(***vi),signed(*di),signed char(*si))) {

auto signed i,r;
auto signed short flag;

if(!vi) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

*di = (~0x00);

return(cv_ords_r(arg,vi,di,si));
}
