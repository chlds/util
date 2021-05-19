/* **** Notes

Convert to a month out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo(signed(arg/* front or from behind */),signed short(*di),signed char(*si))) {

auto signed char **(mon[]) = {
CAPS_MON,MON,(signed char(**)) (0x00),
};

auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

*di = (~0x00);

return(cv_mo_r(arg,mon,di,si));
}
