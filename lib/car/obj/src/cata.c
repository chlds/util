/*

Retrieve

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cata(signed char(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
b = (di);
r = ct(b);
if(r<(ct(si))) b = (si);
r = cmpy_b(di,si);
if(!r) return(0x00);
b = (r+(b));
b = catt(b,(void*)0x00);
return(b);
}
