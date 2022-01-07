/* **** Notes

Concatenate.

Remarks:
Call fn. rl later.
Refer at fn. rl.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_ww(signed short(**di),signed short(*si))) {

auto signed short *w;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);
// if(*di) return(0x00);

r = ct_w(*di);
r = (r+(ct_w(si)));
r++;
r = (r*(sizeof(**di)));
w = (signed short(*)) alloc(r);
if(!w) return(0x00);

*w = (0x00);
r = cpy_w(w,*di);
embed_w(0x00,*di);
rl(*di);
*di = (w);
w = (r+(w));
r = (r+(cpy_w(w,si)));
w = (0x00);

return(r);
}
