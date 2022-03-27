/* **** Notes

Is it a directory or file..?
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed short(__cdecl attrib_b_r(signed char(*path),signed char(*argp))) {

auto signed char *b;
auto signed short flag;
auto signed char dot = ('.');

if(!path) return(0x00);
if(!argp) return(0x00);

b = (0x00);
if(!(cat_b(&b,path,argp,(void*)0x00))) return(0x00);
if(DBG) printf("%s ",b);

AND(flag,0x00);
OR(flag,C_FILE);
if(!(dot^(*argp))) OR(flag,C_DOTFILE);
if(cf_dir(b)) {
AND(flag,0x00);
OR(flag,C_DIR);
if(!(dot^(*argp))) {
OR(flag,C_DOTDIR);
if(!(*(0x01+(argp)))) OR(flag,C_CURRDIR);
if(*(0x01+(argp))) {
if(!(*(0x02+(argp)))) OR(flag,C_PDIR);
}}}

if(!(unmap_b(&b))) return(0x00);

return(flag);
}
