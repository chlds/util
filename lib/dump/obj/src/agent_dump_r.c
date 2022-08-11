/* **** Notes

Dump a file in the binary
*/


# define DUMP_H
# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl agent_dump_r(void(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto flh_t *fl;

if(!argp) return(0x00);

fl = (flh_t*) (argp);
b = (signed char(*)) (*(CLIH_BASE+(R(v,*fl))));
w = (0x00);
if(!(cv_wb(&w,b))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

r = parse_w(w,fl,agent_dump_rr);
if(!r) printf("%s \n","<< Error at fn. parse_w()");

if(!(unmap_w(&w))) {
printf("%s \n","<< Error at fn. unmap_w()");
return(0x00);
}

return(r);
}
