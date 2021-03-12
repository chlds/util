/*

Cue backward.

Remarks:
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_back2(signed char(*sym),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short BYTE_ONE = (0x01);
auto signed short BYTE_MUL = (0x02);
auto signed short BYTE_SYM = (0x04);

auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(argp<(cache))) return(0x00);

AND(flag,0x00);

r = ct_a_back(cache);
if(!r) return(0x00);

cache = (cache+(0x01+(~r)));

if(!(HT^(*cache))) return(r);

if(SP^(*cache)) {
r = ord(sym,*cache);
if(r<(ct(sym))) OR(flag,BYTE_SYM);
else {
r = ct_a(cache);
if(!r) return(0x00);
if(BYTE_ONE<(r)) OR(flag,BYTE_MUL);
else OR(flag,BYTE_ONE);
}}

r = ct_a(cache);
if(!r) return(0x00);

return(r+(cue_back2_r(flag,sym,cache,argp)));
}
