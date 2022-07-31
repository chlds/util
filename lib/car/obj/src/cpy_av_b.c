/* **** Notes

Copy
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_av_b(signed char(*di),signed char(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cpy(di,*si);
if(!r) return(0x00);
di = (r+(di));
si++;
if(*si) {
*di = (' ');
di++;
}
return(0x01+(cpy_av_b(di,si)));
}
