/* **** Notes

Embed
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl embed_spaces(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = ct(argp);

return(embed_spaces_r(r,r+(argp)));
}
