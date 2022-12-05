/* **** Notes

Cue
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl delayed_fetch(signed(arg),signed(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(arg<(0x02)) return(0x01);
r = delayed_fetch_r(arg,argp);
INC(*argp);
if(r) return(0x00);
return(0x01);
}
