/* **** Notes

Spool
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl spool_pg_r(signed(arg),pg_t(**di),pg_t(*si))) {
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
si = (*(CLIH_DI+(R(p,*si))));
*di = (si);
--arg;
return(0x01+(spool_pg_r(arg,di,si)));
}
