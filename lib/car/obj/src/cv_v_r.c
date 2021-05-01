/* **** Notes

Split out of an array for letters.

Remarks:
After calling fn. cv_v, please call fn. rl_v to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_v_r(signed(arg),signed char(**di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!arg) {
*di = (0x00);
return(0x00);
}

r = cue2(si);
si = (r+(si));

r = ct2(SP,si);
i = (r);
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

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

return(0x01+(cv_v_r(--arg,di,si)));
}
