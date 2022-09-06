/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl k_b(signed(colm),signed(arg),signed char(*sy),signed char(**argp))) {
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
// if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
return(k_b_r(colm,arg,sy,argp));
}
