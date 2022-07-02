/* **** Notes

Exchange the DI and the SI
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl sw(signed(*di),signed(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
r = (*di);
*di = (*si);
*si = (r);
return(0x01);
}
