/* **** Notes

Dump a file in the binary
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dump_r(fl_t(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;

if(!argp) return(0x00);

b = (signed char(*)) (*(CLI_BASE+(R(v,*argp))));
w = (0x00);
if(!(cv_wb(&w,b))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

r = parse_w(w,argp,agent_dump_rr);
if(!r) printf("%s \n","<< Error at fn. parse_w()");

if(!(unmap_w(&w))) {
printf("%s \n","<< Error at fn. unmap_w()");
return(0x00);
}

return(r);
}
