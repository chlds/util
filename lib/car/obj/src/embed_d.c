/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_d(signed(arg),signed(*argp))) {

auto signed r;

if(!argp) return(0x00);

if(arg) r = embed_d_rr(arg,argp);
else r = embed_d_r(argp);

return(r);
}
