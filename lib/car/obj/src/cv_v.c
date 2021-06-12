/* **** Notes

Split out of an array for letters.

Remarks:
After calling fn. cv_v, please call fn. rl_v to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_v(signed char(***di),signed char(*si))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = ct_args(si);
if(!r) return(0x00);

r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
*di = (v);
if(!v) return(0x00);

*v = (0x00);
flag = (~0x00);
r = cv_v_r(v,&flag,si);
if(flag) {
AND(r,0x00);
rl_v(&v);
*di = (0x00);
}

return(r);
}
