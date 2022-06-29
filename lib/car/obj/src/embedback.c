/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embedback(signed(arg),signed char(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
r = ct(argp);
argp = (r+(argp));
--argp;
if(r<(arg)) return(0x00);
return(embedback_r(arg,argp));
}
