/*

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_b_to_pg_r(pg_t(*di),pg_t(*si))) {
auto signed char *b;
auto signed r;
if(!si) return(0x00);
if(EQ(di,si)) return(0x00);
b = (*(CLIH_BASE+(R(b,*si))));
r = ct(b);
if(!r) return(0x00);
si = (*(CLIH_DI+(R(p,*si))));
return(r+(ct_b_to_pg_r(di,si)));
}
