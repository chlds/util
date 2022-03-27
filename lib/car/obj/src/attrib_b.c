/* **** Notes

Is it a directory or file..?
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed short(__cdecl attrib_b(signed char(*path),signed char(*argp))) {

auto signed char *b;
auto signed short flag;

if(!path) return(0x00);
if(!argp) return(0x00);

b = (0x00);
if(!(cat_b(&b,path,(void*)0x00))) return(0x00);
if(DBG) printf("%s ",b);

rm_asterisk(b);
flag = attrib_b_r(b,argp);
if(!(unmap_b(&b))) return(0x00);

return(flag);
}
