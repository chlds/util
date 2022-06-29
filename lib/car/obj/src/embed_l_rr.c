/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embed_l_rr(signed(arg),signed char(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
r = (arg);
while(r) *(--r+(argp)) = (0x00);
return(arg);
}
