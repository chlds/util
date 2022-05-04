/* **** Notes

Convert.

Remarks:
Call fn. rl later to release buffer.
A 2-digit number at least
Refer at fn. cx.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cv2d(signed(arg))) {

auto signed char *b;
auto signed r;
auto signed digit = (0x02);
auto signed radix = (0x0A);

b = (0x00);
if(!(cv_d(radix,&b,arg))) return(0x00);

return(cv_r(digit,b));
}
