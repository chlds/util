/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_outs_b(signed(colm),signed(arg/* align */),signed char(*argp))) {
if(!argp) return(0x00);
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
return(coord_outs_b_r(colm,arg,argp));
}
