/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl out_pg(signed(arg/* align */),pg_t(*argp))) {
if(!argp) return(0x00);
if(!(o_pg(arg,argp))) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
return(0x01+(out_pg(arg,argp)));
}
