/* **** Notes

Convert, concatenate and release.

Remarks:
Call fn. rl later to release buffer.
Refer at fn. cv.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cx_rr(signed char(*di),signed char(*et),signed char(*si))) {

auto signed char *b;

if(!di) return(0x00);
if(!si) return(0x00);

b = (0x00);
if(et) cat_b(&b,di,et,si,(void*)0x00);
else cat_b(&b,di,si,(void*)0x00);

embed(0x00,di);
rl(di);
di = (0x00);

return(b);
}
