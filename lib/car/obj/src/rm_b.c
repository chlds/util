/* **** Notes

Remove
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_b(signed(arg),signed char(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
r = ct(argp);
return(rm_b_r(arg,r,argp));
}
