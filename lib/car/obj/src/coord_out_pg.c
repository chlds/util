/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed col;
auto signed r;
auto coord_t co;
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(coord_b(CLIH_IN,OBJS,&co))) return(0x00);
col = (*(CLIH_BASE+(R(x,co))));
col = (colm+(0x01+(~col)));
r = ct_pg(arg,sym,argp);
SHL(r,0x01);
if(col<(r)) co_br();
if(colm<(r)) return(coord_out_pg_over(r,colm,arg,argp));
return(out_pg(arg,sym,argp));
}
