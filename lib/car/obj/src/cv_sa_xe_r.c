/* **** Notes

Convert into a size_t out of characters.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_sa_xe_r(signed short(radix),signed char(*table),size_t(*di),signed char(*si))) {

auto signed r;
auto signed short flag;
auto signed char c;
auto size_t s;
auto signed kb = (1024);
auto signed k = (1000);
auto signed e[] = {
7,6,5,4,3,2,1,0x00,
};
auto signed char *(ub[]) = {
"Z","E","P","T","G","M","K",0x00,
};
auto signed char *(u[]) = {
"z","e","p","t","g","m","k",0x00,
};

if(!table) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

c = (*si);
r = ord(table,c);
if(r<(radix)) *di = (r+(radix*(*di))) /* % LIMIT */ ;

r = ords(u,si);
if(r<(ct_v(u))) {
s = (k);
r = (*(e+(r)));
while(--r) s = (k*(s));
*di = (s*(*di)) /* % LIMIT */ ;
}

r = ords(ub,si);
if(r<(ct_v(ub))) {
s = (kb);
r = (*(e+(r)));
while(--r) s = (kb*(s));
*di = (s*(*di)) /* % LIMIT */ ;
}

si++;

return(0x01+(cv_sa_xe_r(radix,table,di,si)));
}
