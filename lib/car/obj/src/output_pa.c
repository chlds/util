/* **** Notes

Output

Remarks:
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl output_pa(signed(colm),signed(arg/* align */),signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
AND(flag,0x00);
p = cv_pa(0x00,sym,argp);
if(!p) {
printf("%s \n","<< Error at fn. cv_pa()");
return(0x00);
}
r = output_pg_r(colm,arg,sym,p);
r = ct_b_up_to_pg(r,*(CLIH_BASE+(R(p,*p))));
if(!r) OR(flag,0x01);
if(!(rl_pg(&p))) {
printf("%s \n","<< Error at fn. rl_pg()");
return(0x00);
}
if(flag) return(0x00);
argp = (r+(argp));
return(r+(output_pa(colm,arg,sym,argp)));
}
