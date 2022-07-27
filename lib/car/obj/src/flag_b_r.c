/* **** Notes

Flag
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl flag_b_r(signed char(**v),signed char(*a),signed short(*di),signed short(*si))) {
auto signed r;
auto signed short flag;
if(!v) return(0x00);
if(!(*v)) return(0x00);
if(!si) return(0x00);
AND(r,0x00);
if(!(cmpr_part(&r,a,*v))) return(0x00);
if(!r) {
flag = (*si);
OR(*di,flag);
}
v++;
si++;
return(0x01+(flag_b_r(v,a,di,si)));
}
