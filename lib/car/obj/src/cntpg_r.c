# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntpg_r(pg_t(*di),pg_t(*si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(EQ(di,si)) si = (0x00);
if(si) si = (*(CLIH_DI+(R(p,*si))));
return(0x01+(cntpg_r(di,si)));
}
