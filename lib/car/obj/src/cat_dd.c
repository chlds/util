/* **** Notes

Concatenate.

Remarks:
Call fn. rl later.
Refer at fn. rl.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cat_dd(signed(**di),signed(si))) {

auto signed *d;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
// if(!si) return(0x00);
// if(*di) return(0x00);

r = ct_d(*di);
r++;
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
*d = (si);
r++;
d++;
*d = (0x00);
d = (0x00);

return(r);
}
