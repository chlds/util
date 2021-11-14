/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_w(signed(arg),signed short(*argp))) {

auto signed r;

if(!argp) return(0x00);

if(arg) r = embed_w_rr(arg,argp);
else r = embed_w_r(argp);

return(r);
}
