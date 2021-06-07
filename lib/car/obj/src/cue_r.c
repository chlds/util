/*

Retrieve bytes to the leading address of a word or symbol.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_r(signed short(flag),signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed r;

// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(HT^(*argp))) return(0x00);

if(SP^(*argp)) {
if(0x02&(flag)) return(0x00);
r = ord(sym,*argp);
if(0x01&(flag)) {
if(!(r<(ct(sym)))) return(0x00);
}
if(!flag) {
if(r<(ct(sym))) return(0x00);
}}

/* ..or
if(SP^(*argp)) {
if(0x02&(flag)) return(0x00);
r = ord(sym,*argp);
if(!(r<(ct(sym)))) {
if(flag) return(0x00);
}
else {
if(!flag) return(0x00);
}}
//*/

else OR(flag,0x02);

r = ct_a(argp);
if(!r) return(0x00);

return(r+(cue_r(flag,sym,r+(argp))));
}
