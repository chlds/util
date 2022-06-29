/* **** Notes

Remove the code of line break.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_br(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = ct(argp);
argp = (r+(argp));
--argp;
return(rm_br_r(r,argp));
}
