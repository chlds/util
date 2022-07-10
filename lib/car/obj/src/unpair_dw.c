/*

Unpair bytes out of a two-word character based on UTF-16

Remarks:
add augend, addend; addition to find the sum
multiply multiplicand, multiplier; multiplication to find the product
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unpair_dw(signed(*di),signed short(*si))) {
auto signed short *w;
auto signed r;
auto signed utf_16 = (0xFFFF);
auto signed ten_b = (0x3FF); // in 10b
auto signed first = (0xD800);
auto signed second = (0xDC00);
if(!di) return(0x00);
if(!si) return(0x00);
w = (si);
r = (signed) (*w);
r = (utf_16&(r));
if(!(EQ(first,r&(~ten_b)))) return(0x00);
w++;
r = (signed) (*w);
r = (utf_16&(r));
if(!(EQ(second,r&(~ten_b)))) return(0x00);
AND(r,ten_b);
// second = (~second);
// AND(r,second);
*di = (r);
return(0x02+(unpair_dw_r(di,si)));
}
