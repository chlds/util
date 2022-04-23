/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/


# define CLI_H
# define CAW_H
# define SAT_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cmdl2_time_selects(SAT(*argp))) {

auto void *v;
auto void *oldbrush;
auto void *oldfont;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);
v = (*(CLI_BASE+(R(brush,*argp))));
v = select_object_beta(*(CLI_DI+(R(dc,*argp))),v);
oldbrush = (v);
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta() for a brush");
return(0x00);
}

v = (*(CLI_BASE+(R(v,R(font,*argp)))));
v = select_object_beta(*(CLI_DI+(R(dc,*argp))),v);
oldfont = (v);
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta() for a font");
OR(flag,0x01);
}

if(!flag) {
r = cmdl2_time_rrrr(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_rrrr()");
}

v = select_object_beta(*(CLI_DI+(R(dc,*argp))),oldfont);
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta()");
OR(flag,0x01);
}

v = select_object_beta(*(CLI_DI+(R(dc,*argp))),oldbrush);
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta()");
return(0x00);
}

if(flag) AND(r,0x00);

return(r);
}
