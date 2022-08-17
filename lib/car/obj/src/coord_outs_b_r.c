/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_outs_b_r(signed(colm),signed(arg/* align */),signed char(*argp))) {
auto signed col;
auto signed r;
if(!argp) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
col = (colm+(0x01+(~col)));
col++;
r = ct_a(argp);
if(col<(r)) co_br(0x01);
r = cli_out_b(arg,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(r+(coord_outs_b_r(colm,arg,argp)));
}
