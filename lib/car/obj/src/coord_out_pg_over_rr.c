/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_over_rr(signed(n),signed(colm),signed(arg/* align */),pg_t(*argp))) {
auto signed col;
auto coord_t co;
if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(coord_b(CLIH_IN,OBJS,&co))) return(0x00);
col = (*(CLIH_BASE+(R(x,co))));
col = (colm+(0x01+(~col)));
if(col<(0x02)) return(0x00);
if(!(o_pg(arg,argp))) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
--n;
return(0x01+(coord_out_pg_over_rr(n,colm,arg,argp)));
}
