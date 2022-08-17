/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_out_pg_r(signed(n),signed(arg/* align */),pg_t(*argp))) {
if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(o_pg(arg,argp))) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
--n;
return(0x01+(cue_out_pg_r(n,arg,argp)));
}
