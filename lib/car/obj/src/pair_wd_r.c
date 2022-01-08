/*

Pair bytes into a two-word character based on UTF-16.

Remarks:
Call fn. rl later.
subtract minuend, subtrahend; subtraction to find the difference
divid dividend, divisor; division to find the quotient (and the remainder)
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl pair_wd_r(signed short(**di),signed(si))) {

auto signed char *b;
auto signed short w;
auto signed r;
auto signed short flag;
auto signed second = (0xDC00);

if(!di) return(0x00);

r = (si);
AND(r,0x3FF);
// in 10b
OR(r,second);
w = (signed short) (r);
r = cat_ww(di,w);
if(!r) return(0x00);

return(0x02);
}
