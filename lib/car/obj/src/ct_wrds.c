/* **** Notes

Count the arguments to the terminating null character.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_wrds(signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed retv;
auto signed r;

/* **** CODE/TEXT */
if(!base) return(0x00);

AND(flag,0x00);
AND(retv,0x00);

r = ct_wrds_r(flag,&retv,base);
if(!r) return(0x00);

return(retv);
}
