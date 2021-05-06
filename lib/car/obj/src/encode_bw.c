/*

Encode characters into bytes based on UTF-8.

Remarks:
Return the number of encoded bytes.
Support for surrogate pairs.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl encode_bw(signed char(**di),signed short(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = encode_bw_r(di,si);
if(!(*di)) AND(r,0x00);

return(r);
}
