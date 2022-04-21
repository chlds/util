/* **** Notes

Dump a file in the binary
*/


# define DUAL_CONFIG_H
# define DUMP_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_dump_r(void(*argp))) {

auto signed char *b;
auto signed short *w;
auto signed r;
auto fl_t *fl;

if(!argp) return(0x00);

fl = (fl_t*) (argp);
b = (signed char(*)) (*(CLI_BASE+(R(v,*fl))));
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
