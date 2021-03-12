/*

Cue backward.

Remarks:
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_back2_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short BYTE_ONE = (0x01);
auto signed short BYTE_MUL = (0x02);
auto signed short BYTE_SYM = (0x04);

auto signed char *b;
auto signed r;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);
if(!(argp<(cache))) return(0x00);

r = ct_a_back(cache);
if(!r) return(0x00);

cache = (cache+(0x01+(~r)));

if(!(HT^(*cache))) {
if(flag) return(0x00);
return(r);
}

if(!(SP^(*cache))) {
if(flag) return(0x00);
}
else {
r = ord(sym,*cache);
if(r<(ct(sym))) {
if(flag&(BYTE_ONE|BYTE_MUL)) return(0x00);
OR(flag,BYTE_SYM);
}
else {
if(BYTE_SYM&(flag)) return(0x00);
r = ct_a(cache);
if(!r) return(0x00);
if(BYTE_ONE<(r)) {
if(BYTE_ONE&(flag)) return(0x00);
OR(flag,BYTE_MUL);
}
else {
if(BYTE_MUL&(flag)) return(0x00);
OR(flag,BYTE_ONE);
}}}

r = ct_a(cache);
if(!r) return(0x00);

return(r+(cue_back2_r(flag,sym,cache,argp)));
}
