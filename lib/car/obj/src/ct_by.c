/* **** Notes

Count by.

Remarks:
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_by(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = nbytechar(*argp);
if(!(0x80^(r))) AND(r,0x00);

return(r);
}
