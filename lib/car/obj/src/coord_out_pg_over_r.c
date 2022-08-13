/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_over_r(signed(n),signed(colm),signed(arg/* align */),pg_t(*argp))) {
auto signed r;
if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
r = coord_out_pg_over_rr(n,colm,arg,argp);
if(!r) return(0x00);
argp = spool_pg(r,argp);
if(!argp) return(0x00);
n = (n+(0x01+(~r)));
if(n) co_br();
return(r+(coord_out_pg_over_r(n,colm,arg,argp)));
}
