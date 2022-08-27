/* **** Notes

Output

Remarks:
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl out_o_pg(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed x,y;
if(!offs) return(0x00);
if(!argp) return(0x00);
if(!(align_pg(argp))) return(0x00);
if(!(cumul_pg(*offs,CLIH_OFFSET,argp))) return(0x00);
AND(x,0x00);
OR(x,0x01);
y = coord_y_b();
p = (*(CLIH_OFFSET+(R(p,*argp))));
r = ct_pg_rows(colm,p);
if(!r) return(0x00);
if(--r) y = (y+(0x01+(~r)));
if(!(caret_b(x,y))) return(0x00);
r = coord_out_o_pg(colm,arg,sym,argp);
p = (*(CLIH_OFFSET+(R(p,*argp))));
if(!p) return(0x00);
*offs = ct_to_pg(p,*(CLIH_BASE+(R(p,*argp))));
return(r);
}
