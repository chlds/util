/* **** Notes

Cue
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl delayed_fetch(signed(arg),signed(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
r = (*argp);
r = (r%(arg));
*argp = (r);
if(r) return(0x00);
return(0x01);
}
