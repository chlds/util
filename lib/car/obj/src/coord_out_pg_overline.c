/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_overline(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto signed col;
auto signed r;
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
if(!argp) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
if(!(EQ(0x01,col))) co_br(0x01);
b = (*(CLI_B+(R(b,*argp))));
r = coord_outs_b(colm,arg,b);
if(!r) return(0x00);
return(0x01);
}
