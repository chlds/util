/* **** Notes

Remove trailing spaces.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_trailing_spaces(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = ct(argp);
argp = (r+(argp));
--argp;
return(rm_trailing_spaces_r(r,argp));
}
