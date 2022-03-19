/* **** Notes

Stat.
*/


# define CALEND
# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_si_r(signed char(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;

if(!argp) return(0x00);

w = (0x00);
if(!(cv_wb(&w,argp))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

b = (argp);
r = agent_si_rr(b,w);
if(!r) printf("%s \n","<< Error at fn. agent_si_rr()");

if(!(unmap_w(&w))) {
printf("%s \n","<< Error at fn. unmap_w()");
return(0x00);
}

return(r);
}
