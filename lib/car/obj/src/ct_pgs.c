/* **** Notes

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_pgs(pg_t(*argp))) {
auto pg_t *p;
if(!argp) return(0x00);
p = (*(CLIH_BASE+(R(p,*argp))));
return(ct_pgs_r(p));
}
