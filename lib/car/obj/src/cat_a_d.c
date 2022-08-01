/* **** Notes

Concatenate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_a_d(signed(**di),signed(*si))) {
auto signed *d;
auto signed r;
if(!di) return(0x00);
// if(!si) return(0x00);
// if(!(*di)) return(0x00);
r = ct_d(*di);
r = (r+(ct_d(si)));
r++;
r = (r*(sizeof(**di)));
d = (signed*) alloc(r);
if(!d) return(0x00);
*d = (0x00);
r = cpy_d(d,*di);
embed_d(0x00,*di);
rl(*di);
*di = (d);
d = (r+(d));
r = (r+(cpy_d(d,si)));
d = (0x00);
return(r);
}
