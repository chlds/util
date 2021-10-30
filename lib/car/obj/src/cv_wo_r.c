/* **** Notes

Convert into an array of pointers.

Remarks:
Refer at fn. cv_ww.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_wo_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!flag) return(0x00);
// if(!sym) return(0x00);
if(!si) return(0x00);
// if(!(*si)) return(0x00);

*di = (0x00);
if(!(*flag)) return(0x00);

r = cue(sym,si);
i = (r);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

*b = (0x00);
r = ncpy(i,b,si);
b = (0x00);
if(i^(r)) return(0x00);

di++;
si = (r+(si));
if(!(*si)) AND(*flag,0x00);

return(0x01+(cv_wo_r(di,flag,sym,si)));
}
