/* **** Notes

Split out of an array for letters.

Remarks:
After calling fn. cv_v, please call fn. rl_v to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_v_r(signed char(**di),signed short(*flag),signed char(*si))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!flag) return(0x00);
if(!si) return(0x00);

*di = (0x00);

si = (si+(cue2(si)));

r = ct2(SP,si);
i = (r);
if(!r) {
AND(*flag,0x00);
return(0x00);
}

r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

*b = (0x00);
r = cpy2(SP,b,si);
if(i^(r)) {
*b = (0x00);
rl(b);
b = (0x00);
*di = (b);
return(0x00);
}

si = (r+(si));
di++;

return(0x01+(cv_v_r(di,flag,si)));
}
