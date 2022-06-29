/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_w(signed(arg),signed short(*argp))) {
if(!argp) return(0x00);
if(arg) return(embed_w_rr(arg,argp));
return(embed_w_r(argp));
}
