/*

Unpair bytes out of a two-word character based on UTF-16.

Remarks:
add augend, addend; addition to find the sum
multiply multiplicand, multiplier; multiplication to find the product
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unpair_dw_r(signed(*di),signed short(*si))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed addend = (0x10000);
auto signed first = (0xD800);

if(!di) return(0x00);
if(!si) return(0x00);

r = (signed) (*si);
flag = (~first);
AND(r,flag);
AND(r,0x3FF);
// in 10b
SHL(r,0x0A);
r = (addend+(r));
AND(r,0x1FFFFF);
// .oooo.oooo .oooi.iiii .iiii.iiii .iiii.iiii (in 21b)
OR(*di,r);

return(0x02);
}
