/* **** Notes

Copy to the <di> out of the <si> in a loop.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_l(signed char(*di),signed char(*si))) {
auto signed r;
auto signed char cache;
if(!di) return(0x00);
if(!si) return(0x00);
AND(r,0x00);
while(*si) {
// i.e., *di = (*si);
cache = (*si);
*di = (cache);
di++;
si++;
r++;
}
// if(r) *di = (*si);
*di = (0x00);
return(r);
}
