/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_d_rr(signed(arg),signed(*argp))) {

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

*(--arg+(argp)) = (0x00);

return(0x01+(embed_d_rr(arg,argp)));
}