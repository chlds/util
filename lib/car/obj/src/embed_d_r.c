/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_d_r(signed(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
*argp = (0x00);
argp++;
return(0x01+(embed_d_r(argp)));
}
