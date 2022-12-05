/* **** Notes

Cue
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl delayed_fetch_r(signed(arg),signed(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = (*argp);
r = (r%(arg));
*argp = (r);
return(r);
}
