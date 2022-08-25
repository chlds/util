/*

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_to_pg(pg_t(*di),pg_t(*si))) {
// if(!di) return(0x00);
if(!si) return(0x00);
if(EQ(di,si)) return(0x00);
si = (*(CLIH_DI+(R(p,*si))));
return(0x01+(ct_to_pg(di,si)));
}
