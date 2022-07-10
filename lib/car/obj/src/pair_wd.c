/*

Pair bytes into a two-word character based on UTF-16

Remarks:
Call fn. rl later.
subtract minuend, subtrahend; subtraction to find the difference
divid dividend, divisor; division to find the quotient (and the remainder)
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl pair_wd(signed short(**di),signed(si))) {
auto signed short w;
auto signed r;
auto signed sub = (0x10000);
auto signed first = (0xD800);
if(!di) return(0x00);
r = (si);
AND(r,0x1FFFFF);
// .oooo.oooo .oooi.iiii .iiii.iiii .iiii.iiii (in 21b)
r = (r+(0x01+(~sub)));
SHR(r,0x0A);
AND(r,0x3FF);
// in 10b
OR(r,first);
w = (signed short) (r);
r = cat_ww(di,w);
if(!r) return(0x00);
return(0x02+(pair_wd_r(di,si)));
}
