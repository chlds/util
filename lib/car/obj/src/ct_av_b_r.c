/* **** Notes

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_av_b_r(signed(*di),signed char(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = ct(*si);
*di = (r+(*di));
si++;
return(0x01+(ct_av_b_r(di,si)));
}
