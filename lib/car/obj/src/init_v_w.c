/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_v_w(signed(cached),signed(arg),signed short(**argp))) {
auto signed short *w;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(cached) {
embed_w(0x00,*argp);
rl(*argp);
}
w = (0x00);
*argp = (w);
argp++;
--arg;
return(0x01+(init_v_w(cached,arg,argp)));
}
