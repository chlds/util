/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_w_l_r(signed short(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);
while(*argp) {
*argp = (0x00);
argp++;
r++;
}

return(r);
}
