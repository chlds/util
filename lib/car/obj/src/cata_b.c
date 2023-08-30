/*

Retrieve

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cata_b(signed char(*di),signed char(*si),signed(arg))) {
auto signed char *d;
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (di);
r = ct(b);
if(!(r<(ct(si)))) b = (si);
d = cata(di,si);
if(!d) return(d);
return(cata_b_r(d,b,arg));
}
