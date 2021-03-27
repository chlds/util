/* **** Notes

Count arguments to the terminating null character.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_ars(signed(*retv),signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

AND(flag,0x00);
AND(*retv,0x00);

r = ct_ars_r(flag,retv,base);

return(r);
}
