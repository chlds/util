/* **** Notes

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_av_b(signed(*di),signed char(**si))) {
if(!di) return(0x00);
if(!si) return(0x00);
AND(*di,0x00);
return(ct_av_b_r(di,si));
}
