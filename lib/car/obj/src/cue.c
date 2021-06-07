/*

Retrieve bytes to the leading address of a word or symbol.

Remarks:
Refer at fn. ct_to
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue(signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(flag,0x00);
if(!(SP^(*argp))) OR(flag,0x02);
if(!(HT^(*argp))) OR(flag,0x02);

if(!flag) {
r = ord(sym,*argp);
if(r<(ct(sym))) OR(flag,0x01);
}

r = ct_a(argp);
if(!r) return(0x00);

return(r+(cue_r(flag,sym,r+(argp))));
}
