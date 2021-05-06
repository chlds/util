/*

Encode characters into bytes based on UTF-8.

Remarks:
Return the number of encoded bytes.
No support for surrogate pairs.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl encode2b(signed char(**di),signed short(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = encode2b_r(di,si);
if(!(*di)) AND(r,0x00);

return(r);
}
