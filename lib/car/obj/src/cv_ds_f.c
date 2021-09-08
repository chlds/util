/* **** Notes

Convert.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cv_ds_f(signed char(*argp),signed char(di),signed char(si))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

b = (0x00);
if(!(rd_s(&b,argp))) {
if(b) rl(b);
printf("%s \n","<< Error at fn. rd_s()");
return(0x00);
}

r = cv_ds_b(b,di,si);
if(!r) {
if(b) rl(b);
printf("%s \n","<< Error at fn. cv_ds_b()");
return(0x00);
}

if(!(wr_s(argp,b))) {
if(b) rl(b);
printf("%s \n","<< Error at fn. wr_s()");
return(0x00);
}

if(b) rl(b);
b = (0x00);

return(r);
}
