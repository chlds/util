/* **** Notes

Output

Remarks:
Build a linked list for output
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl output_pg(signed(colm),signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
b = (*(CLI_B+(R(b,*argp))));
if(!b) return(0x00);
p = cv_pg(0x00,sym,argp);
if(!p) {
printf("%s \n","<< Error at fn. cv_pg()");
return(0x00);
}
r = output_pg_r(colm,arg,sym,p);
if(!(unbind_pg(p))) {
printf("%s \n","<< Error at fn. unbind_pg()");
return(0x00);
}
return(r);
}
