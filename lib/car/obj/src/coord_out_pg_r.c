/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_r(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto signed col;
auto signed r;
auto signed short flag;
if(!argp) return(0x00);
AND(flag,0x00);
b = (*(CLI_B+(R(b,*argp))));
if(!b) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
col = (colm+(0x01+(~col)));
col++;
r = ct(b);
//
if(col<(r)) {
if(colm<(r)) return(coord_out_pg_overline(colm,arg,sym,argp));
if(EQ(SP,*b)) OR(flag,0x01);
co_br(0x01);
}
if(!flag) cli_outs_b(arg,b);
argp = (*(CLIH_DI+(R(p,*argp))));
return(0x01+(coord_out_pg_r(colm,arg,sym,argp)));
}
