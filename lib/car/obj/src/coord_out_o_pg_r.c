/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_o_pg_r(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed col;
auto signed r;
auto signed short flag;
if(!offs) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
p = (*(CLIH_INDEX+(R(p,*argp))));
if(!p) return(0x00);
b = (*(CLI_B+(R(b,*p))));
if(!b) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
col = (colm+(0x01+(~col)));
col++;
r = ct(b);
//
if(col<(r)) {
if(colm<(r)) return(coord_out_o_pg_overline(colm,arg,offs,sym,argp));
// if(EQ(SP,*b)) OR(flag,0x01);
co_br(0x01);
*(CLIH_OFFSET+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_OFFSET,argp))) return(0x00);
AND(*(CLI_D+(offs)),0x00);
}
r = cli_outs_b(arg,b);
if(!r) return(0x00);
p = (*(CLIH_DI+(R(p,*p))));
*(CLIH_INDEX+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_INDEX,argp))) return(0x00);
return(0x01+(coord_out_o_pg_r(colm,arg,offs,sym,argp)));
}
