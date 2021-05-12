/* **** Notes

Remove trailing blanks.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_trailing_blanks(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = ct(argp);

return(rm_trailing_blanks_r(r,r+(argp)));
}
