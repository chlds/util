/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl out_pg_r(signed(n),signed(arg/* align */),pg_t(*argp))) {
auto signed r;
if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
r = o_pg(arg,argp);
if(!r) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
--n;
return(0x01+(out_pg_r(n,arg,argp)));
}
