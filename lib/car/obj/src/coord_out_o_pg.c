/* **** Notes

Output

Remarks:
Refer at fn. cv_pg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_o_pg(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
if(!argp) return(0x00);
return(coord_out_o_pg_r(colm,arg,sym,argp));
}
