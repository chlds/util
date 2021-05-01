/* **** Notes

Split out of an array for letters.

Remarks:
After calling fn. cv_v, please call fn. rl_v to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_v(signed char(***di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

// count arguments
r = ct_ars(&i,si);
if(!r) return(0x00);

r = (i);
r++;
r = (r*(sizeof(**di)));
*di = (signed char(**)) alloc(r);
if(!(*di)) return(0x00);

*(i+(*di)) = /* (signed char(*)) */ (0x00);

return(cv_v_r(i,*di,si));
}
