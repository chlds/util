/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_w_r(signed short(*argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

*argp = (0x00);
argp++;

return(0x01+(embed_w_r(argp)));
}
