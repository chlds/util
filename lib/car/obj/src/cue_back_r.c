/*

Cue backward.

Remarks:
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_back_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed r;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(cache<(argp)) return(0x00);
if(!(*cache)) return(0x00);

if(EQ(cache,argp)) {
if(flag) OR(flag,0x04);
else return(0x00);
}

if(!(HT^(*cache))) {
if(flag) return(0x01+(~(ct_a(cache))));
return(0x00);
}

if(!(SP^(*cache))) {
if(flag) return(0x01+(~(ct_a(cache))));
}
else {
r = ord(sym,*cache);
if(r<(ct(sym))) {
OR(flag,0x01);
if(0x02&(flag)) return(0x01+(~(ct_a(cache))));
}
else {
OR(flag,0x02);
if(0x01&(flag)) return(0x01+(~(ct_a(cache))));
}}

if(0x04&(flag)) return(0x00);

r = ct_a_back(cache);
if(!r) return(0x00);

cache = (cache+(0x01+(~r)));

return(r+(cue_back_r(flag,sym,cache,argp)));
}
