/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_l_rr(signed(arg),signed char(*argp))) {

auto signed r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

AND(r,0x00);
while(arg) {
*(--arg+(argp)) = (0x00);
r++;
}

return(r);
}
