/* **** Notes

Remove trails.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_trails(signed char(*cache),signed char(*argp))) {

auto signed r;

// if(!cache) return(0x00);
if(!argp) return(0x00);

r = ct(argp);

return(rm_trails_r(r,cache,r+(argp)));
}
