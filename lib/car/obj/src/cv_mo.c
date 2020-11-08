/* **** Notes

Convert to a month out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mo(signed short(*di),signed char(*si))) {

auto signed char **(mon[]) = {
CAPS_MON,MON,(signed char(**)) (0x00),
};

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

*di = (~0x00);

r = cv_mo_internal(mon,di,si);

return(r);
}
