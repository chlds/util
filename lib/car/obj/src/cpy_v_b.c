/* **** Notes

Copy
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_v_b(signed char(**di),signed char(**si))) {
auto signed char *b;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
*di = (0x00);
return(0x00);
}
b = (*si);
*di = (b);
di++;
si++;
return(0x01+(cpy_v_b(di,si)));
}
