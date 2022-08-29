/* **** Notes

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_pgs_r(pg_t(*argp))) {
if(!argp) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
return(0x01+(ct_pgs_r(argp)));
}
