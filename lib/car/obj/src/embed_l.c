/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embed_l(signed(arg),signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

if(arg) r = embed_l_rr(arg,argp);
else r = embed_l_r(argp);

return(r);
}