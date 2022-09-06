/* **** Notes

Output

Remarks:
Refer at fn. coord_out_o_pg_r
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg_r(signed(colm),signed(arg/* align */),signed(*offs),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed col;
auto signed r;
if(!offs) return(0x00);
if(!argp) return(0x00);
p = (*(CLIH_INDEX+(R(p,*argp))));
if(!p) return(0x00);
b = (*(CLI_B+(R(b,*p))));
if(!b) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
col = (colm+(0x01+(~col)));
col++;
r = ct_a(b);
if(col<(r)) {
co_br(0x01);
*(CLIH_OFFSET+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_OFFSET,argp))) return(0x00);
INC(*(CLI_Q+(offs)));
}
if(!(o_pg(arg,p))) return(0x00);
p = (*(CLIH_DI+(R(p,*p))));
*(CLIH_INDEX+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_INDEX,argp))) return(0x00);
return(0x01+(coord_out_pg_r(colm,arg,offs,argp)));
}
