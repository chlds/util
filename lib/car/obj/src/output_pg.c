/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl output_pg(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = coord_out_pg(colm,arg,sym,argp);
if(!r) return(0x00);
argp = spool_pg(r,argp);
return(r+(output_pg(colm,arg,sym,argp)));
}
