/* **** Notes

Output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl coord_out_o_pg_overline(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed col;
auto signed r;
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
if(!offs) return(0x00);
if(!argp) return(0x00);
p = (*(CLIH_INDEX+(R(p,*argp))));
if(!p) return(0x00);
col = coord_x_b();
if(!col) return(0x00);
if(!(EQ(0x01,col))) {
co_br(0x01);
*(CLIH_OFFSET+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_OFFSET,argp))) return(0x00);
INC(*(CLI_Q+(offs)));
}
b = (*(CLI_B+(R(b,*p))));
r = coord_out_pa(colm,arg,offs,sym,b);
if(!r) {
printf("%s \n","<< Error at fn. coord_out_pa()");
return(0x00);
}
p = (*(CLIH_DI+(R(p,*p))));
*(CLIH_INDEX+(R(p,*argp))) = (p);
if(!(cumul_pg(0x00,CLIH_INDEX,argp))) return(0x00);
return(0x01+(coord_out_o_pg_r(colm,arg,offs,sym,argp)));
}
