/* **** Notes

Embed.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl embedback(signed(arg),signed char(*argp))) {

auto signed i,r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

r = ct(argp);
if(r<(arg)) return(0x00);

return(embedback_r(arg,argp+(r)));
}
