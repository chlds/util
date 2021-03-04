/* **** Notes

Count bytes back.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_back(signed(*retv),signed char(*argp))) {

auto signed r;

if(!retv) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);

AND(*retv,0x00);

return(ct_back_r(retv,--argp));
}
