/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_l(signed(arg),signed char(*argp))) {
if(!argp) return(0x00);
if(arg) return(embed_l_rr(arg,argp));
return(embed_l_r(argp));
}
