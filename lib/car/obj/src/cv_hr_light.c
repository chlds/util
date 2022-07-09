/* **** Notes

Convert to time out of characters
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_light(signed short(*hr),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!hr) return(0x00);
if(!argp) return(0x00);
b = (0x00);
if(!(cat_b(&b,argp,(void*)0x00))) return(0x00);
r = cv_hr_light_r(hr,b);
if(!(unmap_b(&b))) return(0x00);
return(r);
}
