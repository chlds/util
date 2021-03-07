/* **** Notes

Count backward.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_a_back(signed(*retv),signed char(*argp))) {

if(!retv) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);

AND(*retv,0x00);

return(ct_a_back_r(retv,--argp));
}
