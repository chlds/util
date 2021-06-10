/* **** Notes

Remove the trailing CR/LF.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_crlf(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = ct(argp);

return(rm_crlf_r(r,r+(argp)));
}
