/* **** Notes

Output

Remarks:
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl out_o_pa(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
if(!offs) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
p = cv_pa(0x00,sym,argp);
if(!p) {
printf("%s \n","<< Error at fn. cv_pa()");
return(0x00);
}
r = out_o_pg(colm,arg,offs,sym,p);
if(!(rl_pg(&p))) {
printf("%s \n","<< Error at fn. rl_pg()");
return(0x00);
}
return(r);
}
