/* **** Notes

Count bytes.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_bv(signed(*di),signed char(**si))) {

if(!di) return(0x00);
if(!si) return(0x00);

AND(*di,0x00);

return(ct_bv_r(di,si));
}
