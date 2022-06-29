/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed(signed(arg),signed char(*argp))) {
if(!argp) return(0x00);
if(arg) return(embed_rr(arg,argp));
return(embed_r(argp));
}
