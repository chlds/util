/* **** Notes

Concatenate

Remarks:
Call fn. rl later
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_w_rl(signed short(**di),signed short(*si))) {
auto signed short *w;
auto signed r;
if(!di) return(~0x00);
r = ct_w(*di);
r = (r+(ct_w(si)));
r++;
r = (r*(sizeof(*w)));
w = (signed short(*)) alloc(r);
if(!w) return(~0x00);
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
