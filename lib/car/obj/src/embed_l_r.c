/* **** Notes

Embed.
*/


# define CAR
# include "./../../../config.h"

signed(__cdecl embed_l_r(signed char(*argp))) {
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
