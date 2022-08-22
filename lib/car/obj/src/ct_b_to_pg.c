/*

Count

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_b_to_pg(pg_t(*di),pg_t(*si))) {
if(!di) return(0x00);
return(ct_b_to_pg_r(di,si));
}
