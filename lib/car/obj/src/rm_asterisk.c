/* **** Notes

Remove.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_asterisk(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = ct(argp);

return(rm_asterisk_r(r,r+(argp)));
}
