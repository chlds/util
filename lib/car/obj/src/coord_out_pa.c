/* **** Notes

Output

Remarks:
Refer at fn. out_o_pa
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl coord_out_pa(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),signed char(*argp))) {
auto pg_t *p;
auto signed r;
auto signed old;
if(!offs) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
p = cv_pa(0x01,sym,argp);
if(!p) {
printf("%s \n","<< Error at fn. cv_pa()");
return(0x00);
}
old = ct_pgs(p);
if(!old) return(0x00);
r = coord_out_pg(colm,arg,offs,p);
if(!(EQ(old,rl_pg(&p)))) {
printf("%s \n","<< Error at fn. rl_pg()");
return(0x00);
}
return(r);
}
