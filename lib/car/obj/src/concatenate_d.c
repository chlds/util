/* **** Notes

Concatenate.

Remarks:
Release the *di later e.g., rl(di).
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl concatenate_d(signed(arg),signed(**di),signed(*si))) {
auto signed *d;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
// if(!si) return(0x00);
// if(!(*di)) return(0x00);
r = ct_d(*di);
r = (r+(ct_d(si)));
r = (arg+(r));
r++;
r = (r*(sizeof(**di)));
d = (signed*) alloc(r);
if(!d) return(0x00);
if(!(cpy_d(d,*di))) *d = (0x00);
cpy_d(d+(ct_d(d)),si);
embed_d(0x00,*di);
if(*di) rl(*di);
*di = (d);
d = (0x00);
return(r);
}
