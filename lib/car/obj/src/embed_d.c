/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_d(signed(arg),signed(*argp))) {
if(!argp) return(0x00);
if(arg) return(embed_d_rr(arg,argp));
return(embed_d_r(argp));
}
