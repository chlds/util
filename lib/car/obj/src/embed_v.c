/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_v(signed(arg),signed char(**argp))) {
if(!argp) return(0x00);
if(arg) return(embed_v_rr(arg,argp));
return(embed_v_r(argp));
}
