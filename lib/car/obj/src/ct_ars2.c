/* **** Notes

Count the arguments to the terminating null character
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_ars2(signed char(*base))) {
auto signed short flag;
auto signed retv;
auto signed r;
if(!base) return(0x00);
AND(flag,0x00);
AND(retv,0x00);
r = ct_ars_r(flag,&retv,base);
if(!r) return(0x00);
return(retv);
}
