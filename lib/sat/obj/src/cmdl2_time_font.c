/* **** Notes

Commandlet to output the local time

Remarks:
Make a font object.
*/


# define CLI_H
# define CAW_H
# define SAT_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cmdl2_time_font(SAT(*argp))) {

auto signed char *b;
auto void *v;
auto signed y;
auto signed x;
auto signed r;

if(!argp) return(0x00);

y = (R(height,R(tf,*argp)));
x = (R(width,R(tf,*argp)));
b = (R(name,R(tf,*argp)));
v = (void(*)) create_font_beta(y,x,b);
if(!v) {
printf("%s \n","<< Error at fn. create_font_beta()");
return(0x00);
}

*(CLI_BASE+(R(font,*argp))) = (v);
// if(v) printf("%s %p \n","A font object created/mapped on the RAM will be on offset",v);

r = cmdl2_time_region(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_region()");

v = (*(CLI_BASE+(R(font,*argp))));
if(!(delete_object_beta(v))) {
printf("%s \n","<< Error at fn. delete_object_beta()");
return(0x00);
}

return(r);
}
