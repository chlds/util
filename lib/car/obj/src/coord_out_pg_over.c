/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_over(signed(n),signed(colm),signed(arg/* align */),pg_t(*argp))) {
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
if(!argp) return(0x00);
return(coord_out_pg_over_r(n,colm,arg,argp));
}
