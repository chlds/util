/*

Pair bytes into a character based on UTF-16.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl pair_b(signed short(*di),signed(si))) {

auto signed first = (0xD800);
auto signed second = (0xDC00);

auto signed char *b;
auto signed r;
auto signed short flag;

if(!di) return(0x00);

// first
r = (si);
// 21b
SHR(r,18);
r = (r+(~0x00));
// into 2b
SHL(r,0x08);
*di = (signed short) (r);
r = (si);
AND(r,0x3FFFF);
// in 18b
SHR(r,10);
OR(*di,r);
OR(*di,first);
di++;

// second
r = (si);
AND(r,0x3FF);
// in 10b
OR(r,second);
*di = (signed short) (r);
di++;
// *di = (0x00);

return(0x02+(0x02));
}
