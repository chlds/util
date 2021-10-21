/*

Cue backward.

Remarks:
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_back(signed char(*sym),signed char(*cache),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!sym) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(argp<(cache))) return(0x00);

AND(flag,0x00);

r = ct_a_back(cache);
if(!r) return(0x00);

cache = (cache+(0x01+(~r)));

return(r+(cue_back_r(flag,sym,cache,argp)));
}
