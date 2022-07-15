/* **** Notes

Split out of an array for letters

Remarks:
Call fn. rl_v later to unmap the buffer allocated on the RAM
Refer at fn. cv_v
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_argt(signed char(***di),signed char(*si))) {
auto signed char **v;
auto signed r;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
r = ct_argt(si);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
*di = (v);
if(!v) return(0x00);
*v = (0x00);
return(cv_argt_r(v,si+(cue_argt_ready(si))));
}
