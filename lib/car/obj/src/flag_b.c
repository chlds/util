/* **** Notes

Flag
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl flag_b(signed char(**v),signed char(*a),signed short(*di),signed short(*si))) {
auto signed r;
if(!v) return(0x00);
if(!a) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
r = flag_b_r(v,a,di,si);
if(!(EQ(r,ct_vb(v)))) AND(r,0x00);
return(r);
}
