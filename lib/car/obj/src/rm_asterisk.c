/* **** Notes

Remove.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_asterisk(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = ct(argp);
argp = (r+(argp));
--argp;
return(rm_asterisk_r(r,argp));
}
