/* **** Notes

Commandlet to output the local time

Remarks:
Make a region object.
*/

# define CCR
# define CAW_H
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl2_time_region(SAT(*argp))) {

auto void *v;
auto signed h;
auto signed w;
auto signed r;

if(!argp) return(0x00);

h = (SHADE_YPOS+(R(height,R(font,*argp))));
w = currently_operating_pixels(0x00);
v = (void(*)) create_rect_rgn_beta(0x00,0x00,w,h);
if(!v) {
printf("%s \n","<< Error at create_rect_rgn_beta()");
return(0x00);
}

*(CLI_BASE+(R(region,*argp))) = (v);
// if(v) printf("%s %p \n","A region object created/mapped on the RAM will be on offset",v);

r = cmdl2_time_rrrr(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_rrrr()");

v = (*(CLI_BASE+(R(region,*argp))));
if(!(delete_object_beta(v))) {
printf("%s \n","<< Error at fn. delete_object_beta()");
return(0x00);
}

return(r);
}
