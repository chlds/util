/* **** Notes

Split out of an array for letters.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_argt_r(signed char(**di),signed char(*si))) {

auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

*di = (0x00);
if(!(*si)) return(0x00);

r = ct_to(0x00,si);
if(!r) return(0x00);

r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

*b = (0x00);
r = ncpy(--r,b,si);
if(!r) return(0x00);

si = (r+(si));
si = (si+(cue_argt(si)));
rm_brs(*di);
di++;
AND(r,0x00);
OR(r,0x01);

return(r+(cv_argt_r(di,si)));
}
