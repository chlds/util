/* **** Notes

Replace CR with SP.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cv_spcr(signed char(*argp))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

b = (0x00);
if(!(rd_f(&b,argp))) {
if(b) rl(b);
printf("%s \n","<< Error at fn. rd_f()");
return(0x00);
}

r = cv_ds(b,SP,CR);
if(!r) {
if(b) rl(b);
printf("%s \n","<< Error at fn. cv_ds()");
return(0x00);
}

if(!(wr_f(argp,b))) {
if(b) rl(b);
printf("%s \n","<< Error at fn. wr_f()");
return(0x00);
}

if(b) rl(b);
b = (0x00);

return(r);
}
