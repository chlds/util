/* **** Notes

Output

Remarks:
Refer at fn. out_o_pg
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl coord_out_pg(signed(colm),signed(arg/* align */),signed(*offs),pg_t(*argp))) {
auto pg_t *p;
auto signed r;
auto signed y;
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
if(!offs) return(0x00);
if(!argp) return(0x00);
if(!(align_pg(argp))) return(0x00);
r = (*(CLI_D+(offs)));
if(!(cumul_pg(r,CLIH_OFFSET,argp))) return(0x00);
//*
r = (*(CLI_Q+(offs)));
y = coord_y_b();
y = (r+(y));
if(!(caret_b(1,y))) return(0x00);
//*/
r = coord_out_pg_r(colm,arg,offs,argp);
p = (*(CLIH_OFFSET+(R(p,*argp))));
if(!p) return(0x00);
*(CLI_D+(offs)) = ct_to_pg(p,*(CLIH_BASE+(R(p,*argp))));
return(r);
}
