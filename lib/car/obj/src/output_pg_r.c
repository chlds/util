/* **** Notes

Output

Remarks:
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl output_pg_r(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
p = (*(CLIH_BASE+(R(p,*argp))));
if(!p) return(0x00);
return(coord_out_pg(colm,arg,sym,p));
}
