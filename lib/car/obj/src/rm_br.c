/* **** Notes

Remove the code of line break.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_br(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = ct(argp);

return(rm_br_r(r,r+(argp)));
}
