/* **** Notes

Commandlet to output the local time

Remarks:
Make a brush object.
*/


# define CAW_H
# define SAT_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cmdl2_time_brushes(SAT(*argp))) {

auto void *v;
auto signed r;

if(!argp) return(0x00);

v = (void(*)) create_solid_brush_beta(LACE);
if(!v) {
printf("%s \n","<< Error at fn. create_solid_brush_beta() for lace..");
return(0x00);
}

*(CLIH_OFFSET+(R(brush,*argp))) = (v);
// printf("%s %p \n","A brush object created/mapped on the RAM will be on offset",v);

r = cmdl2_time_font(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_font()");

v = (*(CLIH_OFFSET+(R(brush,*argp))));
if(!(delete_object_beta(v))) {
printf("%s \n","<< Error at fn. delete_object_beta() for lace..");
return(0x00);
}

// *(CLI_OFFSET+(R(brush,*argp))) = (0x00);

return(r);
}
