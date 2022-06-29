/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_w_l_r(signed short(*argp))) {
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
while(*argp) {
*argp = (0x00);
r++;
argp++;
if(!argp) break;
}
return(r);
}
