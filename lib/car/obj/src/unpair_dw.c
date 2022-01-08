/*

Unpair bytes out of a two-word character based on UTF-16.

Remarks:
add augend, addend; addition to find the sum
multiply multiplicand, multiplier; multiplication to find the product
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unpair_dw(signed(*di),signed short(*si))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;
auto signed first = (0xD800);
auto signed second = (0xDC00);

if(!di) return(0x00);
if(!si) return(0x00);

w = (si);
if(!(EQ(first,first&(*w)))) return(0x00);

w++;
if(!(EQ(second,second&(*w)))) return(0x00);

r = (signed) (*w);
AND(r,0x3FF);
// in 10b
flag = (~second);
AND(r,flag);
*di = (r);

return(0x02+(unpair_dw_r(di,si)));
}
