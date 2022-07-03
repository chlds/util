/* **** Notes

Concatenate.

Remarks:
Release the *di later e.g., rl(di).
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl concatenate_w(signed(arg),signed short(**di),signed short(*si))) {
auto signed short *w;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
// if(!si) return(0x00);
// if(!(*di)) return(0x00);
r = ct_w(*di);
r = (r+(ct_w(si)));
r = (arg+(r));
r++;
r = (r*(sizeof(**di)));
w = (signed short(*)) alloc(r);
if(!w) return(0x00);
if(!(cpy_w(w,*di))) *w = (0x00);
cpy_w(w+(ct_w(w)),si);
embed_w(0x00,*di);
if(*di) rl(*di);
*di = (w);
w = (0x00);
return(r);
}
